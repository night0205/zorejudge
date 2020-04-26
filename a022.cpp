#include <iostream>

using namespace std;

main(){
	string input;
	string s;
	while(cin >> s){
		int flag = 0;
		int l = s.length();
		for(int i = 0; i < l/2; i++){
			if(s[i] != s[l-1-i]){
				flag++;
				break;
			}
		}
		if(flag)
			cout << "no";
		else
			cout << "yes";
		cout << '\n';
	}
}
