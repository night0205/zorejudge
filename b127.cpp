//費氏列數
#include <iostream>

using namespace std;

main(){
	int d[46];
	d[0] = 1;d[1] = 1;
	for(int i = 2; i <= 45; i++){
		d[i] = d[i-2] + d[i-1]; 
	}
	int n;
	while(cin >> n)
		cout << d[n] << '\n';
}
