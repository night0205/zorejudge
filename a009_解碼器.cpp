# include<iostream>
# include<string>
using namespace std;
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string x;
	while(cin >> x){
		int a=x.length();
		for(int i=0;i<a;i++){
			char b=x[i]-7;
			cout << b;
		}
		cout << '\n';
	}
} 
