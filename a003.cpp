#include <iostream>

using namespace std;

main(){
	int m, d;
	cin >> m >> d;
	int s =(m*2+d)%3;
	string t[3] = {"普通","吉","大吉"};
	cout << t[s];
}

