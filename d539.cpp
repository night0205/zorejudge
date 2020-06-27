#include <iostream>

using namespace std;

int tree[1000005] = {0};

int build(int tree[], int a, int b){
	if(a+1 == b)
		return tree[a];
	int m = (a+b)/2;
	int l = build(tree, t, a, m);
	int r = build(tree, t, m, b);
	if(l > r)
		tree[a/2] = l;
	else
		tree[a/2] = r;		
}

int find(int a, int b){
	int max_a, p = a/2;
	while(p<b){
		if(){
			
		}
	}
}

main(){
	int n;
	cin >> n;
	int cnt = 0;
	for(int i = n; i > 0; i = i/2){
		cnt += i;
	}
	cnt++ -= n;
	for(int i = cnt; i < cnt+n; i++)
		cin >> tree[i];
	build(tree, 0, n);
	int q;
	cin >> q;
	while(q--){
		int a, b;
		cin >> a >> b;
		cout << find(a, b) << '\n';
	}
}

