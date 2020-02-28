#include <iostream>

using namespace std;

main(){
	int a,b;
	if(a < b){
		int t = a;
		a = b;
		b = t;
	}
	while(cin >> a >> b){
		while(a > b){
			t = a;
			a = b;
			b = t;
			a -= b;
		}
		cout << a;

	}

}
