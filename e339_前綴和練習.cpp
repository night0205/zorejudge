#include <iostream>

using namespace std;

main(){
	int n;
	cin >> n;
	long long int all = 0, s;
	for(int i = 0; i < n; i++){
		cin >> s;
		all += s;
		cout << all << ' ';
	}
}
