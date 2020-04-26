#include <iostream>

using namespace std;

int n[100], ans;

void puts(int n[], int i, int t, int& ans){
	if(i+2 == t){
		n[i] = 1;
		n[i+1] = 1;
	}
	else{
		n[i] = 1;
		n[i+1] = 1;
		n[i+2] = 1;
	}
	ans++;
}

main(){
	int tt, t;
	cin >> tt;
	for(int x = 1; x <= tt; x++){
		cin >> t;
		for(int i = 0; i < t; i++){
			char tmp;
			cin >> tmp;
			n[i] = (tmp == '.')? 0:1;
		}
		ans = 0;
		for(int i = 0; i < t; i++){
			if(n[i] == 0)
				puts(n, i, t, ans);
		}
		cout << "Case " << x << ": "<< ans << '\n';
	}
}
