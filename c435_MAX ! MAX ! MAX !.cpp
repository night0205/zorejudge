#include <iostream>

using namespace std;

main(){
	int n, max = -1;
	cin >> n;
	int ans=0,s[n];
	for(int i = 0; i < n; i++){
		cin >> s[i];
		if(s[i] > max)max = s[i];
		if((max-s[i]) > ans)ans = max-s[i]; 
	}
	cout << ans;
}
