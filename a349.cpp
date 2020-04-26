#include <iostream> 

using namespace std;

int r[10],m[10];

void load(int d,int s){
	r[d] = m[s];
}
void add(int d, int s1, int s2){
	r[d] = r[s1] + r[s2];
}
void store(int d, int s){
	m[d] = r[s];
}
void move(int d, int s){
	r[d] = r[s];
}
main(){
	for(int i = 0; i <= 8; i++)
		r[i] = 0;
	for(int i = 0; i < 8; i++)
		cin >> m[i];
	string s;
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> s;
		int a,b,c;
		if(s[0] == 'L'){
			cin >> a >> b;
			load(a, b);
		}
		if(s[0] == 'A'){
			cin >> a >> b >> c;
			add(a, b, c);
		}
		if(s[0] == 'S'){
			cin >> a >> b;
			store(a, b);
		}
		if(s[0] == 'M'){
			cin >> a >> b;
			move(a, b);
		}
	}
	cout << r[0] << '\n' << m[0] << '\n';
}
