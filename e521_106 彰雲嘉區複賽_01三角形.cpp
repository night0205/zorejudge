//e521: 106 �����ŰϽ��� - Q1 �T����
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		int x[3];
		cin >> x[0] >> x[1] >> x[2];
		if ((x[0]+x[1]>x[2])&& (x[0]<x[1]+x[2]) && (x[1]<x[2]+x[0])){
			cout << 1;
			if ((x[0]==x[1])|(x[1]==x[2])|(x[0]==x[2])){
				cout << ' ' << 1 << endl;
			}
			else cout << ' ' << 0 << endl;
		}
		else cout << 0 << endl;
	}
	return 0;
} 
