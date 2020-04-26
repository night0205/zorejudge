//b682_ 2015°ª¶¯_02¦P¾Ç¦­¦w
#include<iostream>
using namespace std;

int main(){
	int h1,m1,h2,m2;
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> h1 >> m1 >> h2 >> m2;
	int h3 = h2-h1,m3 = m2-m1;
	/*
	if (m3<0){
		h3 --;
		m3 += 60;
	}
	if(h3<0) h3+=24;
	cout << h3 << ' ' << m3;
	*/
	cout << (h3-(m3<0)+24)%24 <<' ' << (m3+60)%60;
	
	return 0;
}

