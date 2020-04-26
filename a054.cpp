#include <iostream>

using namespace std;

main(){
	string s;
	int a[] = {10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	while(cin >> s){
		int l = 8, t;
		int ans = 0;
		while(l){
			l--;
			ans += ((s[l]-'0')*(8-l));
		}
		//cout << ans << '\n';
		for(int i = 0; i < 26; i++){
			t = (10 - ((ans + a[i]%10*9 +  a[i]/10) % 10 ))%10;
			if(t == s[8]-'0')
				cout << char('A'+i); 
			//cout << t << ' ' << s[8] << '\n';
		}
		cout << '\n';
	}
}
