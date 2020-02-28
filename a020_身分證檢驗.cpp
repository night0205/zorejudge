#include <iostream>

using namespace std;

main(){
	string input;
	string s;
	int id[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	while(cin >> s){
		int ans = id[s[0]-'A'];
		ans = ans%10*9 + ans/10;
		for(int i = 1; i < 9; i++){
			ans += (s[i]-'0')*(9-i);
		}
		ans += s[9]-'0';
		if(ans%10 == 0)
			cout << "real";
		else
			cout << "fake";
		cout << '\n';
	}	
}
