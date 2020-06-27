#include <iostream>
#include <cstdio>

using namespace std;

main(){
	int c, n;
	cin >> c >> n;
	int coin[n+1];
	for(int i = 1; i <= n; i++)
		cin >> coin[i];
	int a[c+1][n+1] = {0};
	for(int i = 1; i <= n; i++){
		for(int j = c; j >= coin[i]; j--){
			int tmp = a[j-coin[i]][0]+coin[i];
			int t = a[j][0];
			if(t < tmp){
				a[j][0] = tmp;
				a[j][1]++;
			}
		}
	}
	cout << a[c][1];
}
