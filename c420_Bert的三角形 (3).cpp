#include <iostream>

using namespace std;

main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < n-i; j++)
			cout << "_";
		for(int j = 0; j < i*2-1; j++)
			cout << "*";
		for(int j = 0; j < n-i; j++)
			cout << "_";
		cout << '\n';
	}
	
}
