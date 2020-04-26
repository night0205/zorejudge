#include <iostream>

using namespace std;

main(){
	int n, m;
	while(cin >> n >> m){
		int s[102][102];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> s[j][i];
			}
		}
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n-1; j++){
				cout << s[i][j] << ' ';
			}
			cout << s[i][n-1] << '\n';
		}
	}	
}
