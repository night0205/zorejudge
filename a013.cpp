#include <iostream>
#include <string>

using namespace std;

int count(string s, char ds[], int di[]){
	int cnt = 0;
	int tmp[s.length()];
	for(int i = 0; i < s.length(); i++){
		for(int j = 0; j < 7; j++){
			if(s[i] == ds[j]){
				tmp[i] = j;
				break;
			}
		}
	}
	for(int i = 0; i < s.length(); i++){
		if(i != s.length()-1 && tmp[i] < tmp[i+1])
			cnt -= di[tmp[i]];
		else
			cnt += di[tmp[i]];
	}
	return cnt;
}

main(){
	string a, b;
	char ds[7] = {'I','V','X','L','C','D','M'};
	int di[7] ={1,5,10,50,100,500,1000};
	while(cin >> a >> b){ 
		int x=0, y=0;
		x = count(a, ds, di);
		y = count(b, ds, di);
		int ans = x-y;
		if(ans < 0)
			ans *= -1;

		if(ans == 0)
			cout << "ZERO";	

		//1000
		while(ans >= 1000){
			cout << "M";
			ans -= 1000;
		}

		//100
		if(ans >= 900){
			cout << "CM";
			ans -= 900;	
		}
		else if(ans >= 500){
			cout << "D";
			ans -= 500;
		}
		else if(ans >= 400){
			cout << "CD";
			ans -= 400;	
		}
		while(ans >= 100){
			cout << "C";
			ans -= 100;
		}

		//10
		if(ans >= 90){
			cout << "XC";
			ans -= 90;	
		}
		else if(ans >= 50){
			cout << "L";
			ans -= 50;
		}
		else if(ans >= 40){
			cout << "XL";
			ans -= 40;	
		}
		while(ans >= 10){
			cout << "X";
			ans -= 10;	
		}
		if(ans >= 9){
			cout << "IX";
			ans -= 9;
		}
		else if(ans >= 5){
			cout << "V";
			ans -= 5;
		}
		else if(ans == 4){
			cout << "IV";
			ans -= 4;
		}
		while(ans >= 1){
			cout << "I";
			ans--;
		}
		cout << '\n';		
	}
}

