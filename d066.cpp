#include <iostream>

using namespace std;

main(){
	int h, m;
	cin >> h >> m;
	int a = h*100+m;
	//cout << a << '\n';
	if(a >= 730 && a < 1700)
		cout << "At School" << '\n';
	else
		cout << "Off School" << '\n';
}
