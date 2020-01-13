//b684_ 2015°ª¶¯_04ª¯ª¯¹CÀ¸
#include<iostream>
using namespace std;

main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int pos[n+1] = {0};
	
	for (int i=1;i<=n;i++){
		int te;
		cin >> te;
		pos[te]=i;
	} 
	int d = 1,cnt = 0;
	for (int i=1;i<n;i++){
		if((pos[i] > pos[i+1] && d==1)||(pos[i] < pos[i+1] && d==-1)){
			d *= -1;
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}
