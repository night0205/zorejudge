//c833_2018°ª¶¯½ÆÁÉ_04¤Gºû°}¦C
#include <iostream>
#include <cstdio>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	char te;
	int x[m]={0},y[n]={0};
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin >> te;
			if (te=='#'){
				x[j]=1;
				y[i]=1;
			}}}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if ((x[j]==1)|(y[i]==1))cout <<'#';
			else cout <<'X';
		}
		cout << '\n';
	}
}
