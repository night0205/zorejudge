#include<iostream>

using namespace std;

main(){
	//ios_base::sync_with_stdio(0);
 	cin.tie(0);
	int s;
	int x = 0;
	int ss = 0;
	while(cin >> s){
		for(int i=1+ss;i<=s;i++){
			//cout << i;
			int lo = 0;
			int a = i;
			while(a>=1){
				int temp = a%10; 
				a /= 10;
				int te = a%10;
				if(temp < te){
					lo = 1;
					break;
				}
			}
			if(lo==0)x++;
		}
		ss = s;	
		cout << x << '\n' ;
	}
} 
