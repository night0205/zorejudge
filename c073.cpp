#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n;
vector<int> blocks[25];

void find(int s, int& p, int& h){
	for(p = 0; p < n; p++){
		for(h = 0; h < blocks[p].size(); h++){
			if(blocks[p][h] == s)
				return;
		}
	}
}

void goback(int p, int h){
	for(int i = h+1; i < blocks[p].size(); i++){
		int s = blocks[p][i];
		blocks[s].push_back(s);
	}
	blocks[p].resize(h+1);
}
void move(int p, int h, int p2){
	for(int i = h; i < blocks[p].size(); i++)
		blocks[p2].push_back(blocks[p][i]);
	blocks[p].resize(h);
}

void print(){
	for(int i = 0; i < n; i++){
		cout << i << ':';
		int len = blocks[i].size();
		for(int j = 0; j < len; j++)
			cout << ' ' << blocks[i][j] ;

		cout << '\n';
	}
}

int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0);
	while(cin >> n){
		for(int i = 0; i < n; i++){
			blocks[i].clear();
			blocks[i].push_back(i);
		}
		string s1, s2;
		int a, b;
		while(cin>> s1){
			if(s1 == "quit")break;
			cin >> a >> s2 >> b;
			if(a==b)continue;
			int pa, pb, ha, hb;
			find(a, pa, ha);
			find(b, pb, hb);
			if(s1 == "move")
				goback(pa, ha);
			if(s2 == "onto")
				goback(pb, ha);
			move(pa, ha, pb);
		}
		print();
	}
	return 0;
}

