#include <iostream>
#include <cstdio>

using namespace std;

main(){
	int c, n;
	cin >> c >> n;
	int coin[n+1];
	for(int i = 1; i <= n; i++)
		cin >> coin[i];
	int a[c+1] = {0};
	for(int i = 1; i <= n; i++){
		for(int j = c; j > coin[i]; j--){
			if(a[j] > a[j-coin[i]]+1){
				a[j] = a[j-coin[i]]+1;
			}
		}
	}
	cout << a[c];
}
