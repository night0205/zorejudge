#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int n;
	while(cin >> n){
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a,a+n);
		for(int i = 0; i < n-1; i++)
			cout << a[i] << ' ';
		cout << a[n-1] << '\n';
	}
}
