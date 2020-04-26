#include <iostream>

using namespace std;

main(){
	int n;
	while(cin >> n){
		int ans = 0;
		if(n >= 40)cout << 100;
		else if(n >= 21)cout << 60+n;
		else if(n >= 11)cout << 60+(n-10)*2;
		else cout << n*6;
		cout << '\n';
	}
}
