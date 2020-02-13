#include <iostream>

using namespace std;

main(){
	int n, k, s[100000] = {0}, b = 0, l = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> k;
		if(k == 1)
			cin >> s[l++];
		else if(k == 2){
			if(s[b]==0)cout << -1;
			else cout << s[b];
			cout << '\n';
		}
		else
			b++;
		if(b>l)l=b;
		
	}	
}
