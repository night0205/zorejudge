#include <iostream>

using namespace std;
int s[1000000] = {0};
int ans[100000] = {0};
main(){
	int n;
	while(cin >> n){
		for(int i = 0; i < 1000000; i++)
			s[i] = 0;
		int num = 2;
		//cnt
		int cnt = 0;
		while(n%2 == 0){
			n /= 2;
			ans[cnt++] = 2;
		}
		num++;
		while(n > 1){
			while(n%num==0){
				n /= num;
				ans[cnt++] = num;
			}
			num += 2;
		}
		

		// output
		for(int i = 0; i < cnt; i++){
			int a = ans[i];
			int t = 0;
			for(int j = i; i < cnt && a == ans[j];j++,t++);
		
			if(i>0)cout << " * ";

			if(t > 1){
				cout << a << "^" << t;
			}
			else{
				cout << a;
			}
			i += t-1;
		}
		if(cnt == 0)cout << n;
		cout << '\n';
	}
}
