#include <iostream>
#include <cstdio>
using namespace std;

main(){
	int n;
	cin >> n;
	while(n--){
		int m;
		cin >> m;
		int coin[m], sum = 0;
		for(int i = 1; i <= m; i++){
			cin >> coin[i];
			sum += coin[i];
		}
		int a = sum/2;
		int dp[50000] = {0};
		for(int i = 1; i <= m; i++){
			for(int j = a; j >= coin[i]; j--)
				dp[j] = max(dp[j], dp[j-coin[i]] + coin[i]);
		}
		int b = sum-dp[a];
		cout << b - dp[a] << '\n'; 
	}
}
