#include <iostream>

using namespace std;

main(){
	int n;
	cin >> n;
	long long int a, b, c;
	while(cin >> a >> b >> c){
		switch(a){
			case 1:
				cout << b+c;
				break;
			case 2:
				cout << b-c;
				break;
			case 3:
				cout << b*c;
				break;
			case 4:
				cout << b/c;
				break;
		}
		cout << '\n';
	} 
} 
