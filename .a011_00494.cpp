#include <iostream>

using namespace std;

main(){
	string s;
	while(cin >> s){
		int l = s.length();
		int ans = 0;
		for(int i = 0; i < l; i++){
			if(s[i]==' '){
				ans++;
			}
		}
		cout << ans << '\n';
		
	}

}
