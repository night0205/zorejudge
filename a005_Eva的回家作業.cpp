//a005_Eva 的回家作業
#include <iostream>
#include <math.h>
using namespace std;
main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,b,c,d,e;
		cin >> a >> b >> c >> d;
		if ((d-c)==(b-a)) e = d*2-c;
		else e = pow(b,4);
		cout << a << " " << b  << " " << c << " " << d  << " " << e << endl; 
	}
} 



