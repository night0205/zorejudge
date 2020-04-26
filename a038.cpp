#include <iostream>

using namespace std;

main(){
	string n;
	cin >> n;
	int t = -1;
	for(int i = n.length()-1; i >= 0; i--){
		if(n[i]!='0'){
			t = i;
			break;
		}
	}
	if(t==-1)cout << 0;
	for(int i = t; i >= 0; i--){
		cout << n[i];
	}
}
