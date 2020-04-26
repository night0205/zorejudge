#include <iostream>

using namespace std;

main(){
	long long int n,ans[128];
	while(cin >> n){
		int x = 0;
		while(n){
			ans[x++] = n%2;
			n /= 2;
		}
		for(int i = x-1; i >= 0; i--){
			cout << ans[i];
		}
		cout << '\n';
	}
}
