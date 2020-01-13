//e623: PPAP
#include<iostream>
#include<string>

using namespace std;

main(){
	string ans[4] = {"Pen","Pineapple","Apple","Pineapple pen"};
	int n;
	cin >> n;
	int a = 0;
	int te = 0;
	while(te<n){
		a++;
		for(int i=0;i<4;i++){
			te += a;
			if(te>=n){
				a = i;
				n = 0;
				break;
			}
		}
	}
	cout << ans[a];
	
}
