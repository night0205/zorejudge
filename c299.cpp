#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int n;
	cin >> n;
	int m[n+2];
	for(int i = 0; i < n; i++)
		cin >> m[i];
	sort(m, m+n);
	cout << m[0] << ' ' << m[n-1] << ' ';
	if(m[0]+n-1 == m[n-1])
		cout << "yes";
	else
		cout << "no";
}
