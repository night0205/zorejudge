#include <iostream>

using namespace std;

main(){
	int n, a, b, c;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b >> c;
		int flag = 0;
		for(int j = a+1; j < b; j++){
			if(flag == 0 && j%c != 0){
				cout << j;
				flag++;
			}
			else if(j%c != 0)
				cout << ' ' << j;
		}
		if(flag == 0)
			cout << "No free parking spaces.";
		cout << '\n';
	}
}
