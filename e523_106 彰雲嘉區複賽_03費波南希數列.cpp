//e523 106 彰雲嘉區複賽 - Q3 費波南希數列
#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		int m;
		cin >> m;
		int a = 1, b = 1, ans=0, cnt=2;
		while(ans<m){
			
			ans = a + b;
			b = a;
			a = ans;
			cnt += 1;
			cout << ans << endl;

		}

		if (m==1)cout << 1 << endl;
		else if (ans==m)cout << cnt << endl;
		else cout << -1 << endl;
	}
	return 0; 
}
