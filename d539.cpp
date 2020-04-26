#include <bits/stdc++.h>

using namespace std;
int maxn = 0;

int LC(int i){
	return i * 2;
}
int RC(int i){
	return i * 2 + 1;
}

vector<Node> node(4*500001);
vector<int> s(500001);

struct Node{
	int max;
}

void build(int l, int r, int i){
	if(r == l){
		node[i].max = s[l];
		return;
	}
	int m = (l + r)/2;
	build(l ,m ,LC(i));
	build(l, m ,RC(i));

	node[i].max = (node[RC(i).max] > node[LC(i).max]) ? node[RC(i)].max : node[LC(i)].max;

}

main(){
	int n, m;
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> s[i];
	cin >> m;
	
	//build tree -> sort(s, s+n)
	build(0, n-1, 1);
	
	//Q
	int l, r;
	while(m--){
		cin >> l >> r;
		if(l > r)
			swap(l, r);
		l -= 1;
		r -= 1;
		maxn = 0;
		query(0, n-1, 1);
		cout << maxn << endl;
	}
} 
