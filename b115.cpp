#include <iostream>
//#include<string>

using namespace std;

void add(int s1[], int s2[], int ans[], int al, int bl, int &ansl){
	for(int i = 0; i < al; i++)ans[i] = s1[i];
	for(int i = 0; i < bl; i++)ans[i] += s2[i];
	for(int i = 0; i < ansl; i++){
		if(ans[i] > 9){
			ans[i+1]++;
			ans[i] -= 10;
		}
	}
	if(ans[ansl] != 0)ansl++;
}
void min(int s1[], int s2[], int ans[], int al, int bl, int &ansl){
	for(int i = 0; i < al; i++)ans[i] = s1[i];
	for(int i = 0; i < bl; i++){
		if(ans[i] < s2[i]){
			ans[i+1]--;
			ans[i] += 10; 
		}
		ans[i] -= s2[i];
	}
	if(ans[ansl-1] == 0)
		ansl--;
}

void mul(int s1[], int s2[], int ans[], int al, int bl, int &ansl){
	ansl = al + bl - 1;
	for(int i = 0; i < al; i++){
		for(int j = 0; j < bl; j++)
			ans[i+j] += s1[i]*s2[j];
	}
	for(int i = 0; i < ansl; i++){
		ans[i+1] += ans[i]/10;
		ans[i] %= 10 ;
	}
	if(ans[ansl] != 0)
		ansl++;
}

bool bigger(int s1[], int s2[], int shift, int al, int bl){
	if(bl+shift > al)
		return false;
	else if(bl+shift < al)
		return true;
	for(int i = bl-1; i >= 0; i--){
		if(s1[i+shift] > s2[i])
			return true;
		else if(s1[i+shift] < s2[i])
			return false;
	}
	return true;
}

void div(int s1[], int s2[], int ans[], int al, int bl, int &ansl){
	int tmp[al];
	for(int i = 0; i < al; i++)
		tmp[i] = s1[i];
	for(int i = ansl; i >= 0; i--){
		while(bigger(tmp, s2, i, al, bl)){
			ans[i]++;
			for(int j = 0; j < bl; j++)
				tmp[j+i] -= s2[j];
			for(int j = 0; j < bl; j++){
				if(tmp[j+i] < 0){
					tmp[j+i+1]--;
					tmp[j+i] += 10;
				}
			}
			while(al > 1 && !tmp[al-1])
				al--;
		}
	}
	if(ansl > 1 && !ans[ansl-1])
		ansl--;
}


main(){
	string a,b;
	char p;
	while(cin >> a >> p >> b){
		int al = a.length(),bl = b.length(), ansl = (al>=bl)?al:bl;;
		int s1[100] = {0}, s2[100] = {0}, ans[100] = {0};

		// string -> int[]
		for(int i = al-1; i >= 0; i--)
			s1[al-1-i] = a[i]-'0';
		for(int i = bl-1; i >= 0; i--)
			s2[bl-1-i] = b[i]-'0';

		if(p == '+')
			add(s1, s2, ans, al, bl, ansl);

		else if(p == '-'){
			if(bigger(s1, s2, 0, al, bl))
				min(s1, s2, ans, al, bl, ansl);
			else{
				min(s2, s1, ans, bl, al, ansl);
				cout << "-";
			}
		}

		else if(p == '*')
			mul(s1, s2, ans, al, bl, ansl);

		else{
			ansl = al - bl + 1;
			if(ansl < 1)
				ansl = 1;
			else
				div(s1, s2, ans, al, bl, ansl);
		}

		/* output */
		for(int i = ansl-1; i >= 0; i--)
			cout << ans[i];
		cout << '\n';
	}
}

