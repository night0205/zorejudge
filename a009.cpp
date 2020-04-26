#include <iostream>
#include <string>

using namespace std;

main(){
	string s;
	while(getline(cin, s)){
		int l = s.length();
		for(int i = 0; i < l; i++){
			char n = s[i]-7;
			cout << n;
		}
		cout << '\n';
	}
}
