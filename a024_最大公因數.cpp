#include <iostream>

using namespace std;

main(){
	int a, b, t;
	while(cin >> a >> b){
		if(a < b){
			t = a;
			a = b;
			b = t;
		}
		while(b != 0){
			t = a%b;
			a = b;
			b = t;
		}
		cout << a << '\n';
	}
}
