#include <iostream>

using namespace std;

main(){
	int n, m;
	while(cin >> n >> m){
		if(n == 1 && m > 1)cout << 1 << " ";
		int data[10000], dl = 0;
		while(n++ <= m){
			int t = n;
			int ans = 0;
			int cnt = 0;
			while(t > 0){
				cnt++;
				t /= 10;
			}
			t = n;
			while(t > 0){
				int num = 1;
				for(int i = 0; i < cnt; i++)
					num *= t%10;
				ans += num;
				t /= 10;
			}
			if(ans == n)
				data[dl++] = n;
		}
		if(dl != 0){
			for(int i = 0; i < dl-1; i++)
				cout << data[i] << " ";
			cout << data[--dl];
		}
		else
			cout << "none";
		cout << '\n';
	}
}
