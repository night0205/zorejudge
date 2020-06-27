#include <iostream>
#include <cstdio>

using namespace std;

main(){
	int n, a[10001], b[10001];
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i] >> b[i];	
	int c[101] = {0};
	for(int i = 1; i <= n; i++){
		for(int j = 100; j >= a[i]; j--){
			c[j] = max(c[j], c[j-a[i]]+b[i]);
		}
	}
	cout << c[100];
}
