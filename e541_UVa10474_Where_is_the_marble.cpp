#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, q, t, run = 0;
	while(cin >> n >> q){
		if(n == 0 && q == 0)break;
		cout << "CASE# " << ++run << ":" << '\n';
		int s[n];
		for(int i = 0; i < n; i++)
			cin >> s[i];
		sort(s, s+n);
		for(int i = 0 ; i < q; i++){
			cin >> t;
			/*
			lower_bound(begin,end,num)
			從陣列的begin位置到end-1位置二分查詢第一個大於或等於num的數字
			upper_bound(begin,end,num)
			第一個大於num的數字
			*/
			int p = lower_bound(s, s+n, t) - s;
			if(s[p] == t)
				cout << t << " found at " << ++p;
			else 
				cout << t << " not found";
			cout << '\n';
		}
	}
	return 0;
}
