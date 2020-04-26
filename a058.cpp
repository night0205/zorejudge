#include <iostream>

using namespace std;

main(){
	int n,t;
	int ans[3]={0,0,0};
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> t;
		ans[t%3]++;
	}
	cout << ans[0] << ' ' << ans[1] << ' ' << ans[2];
}

