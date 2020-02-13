//c517_2017高雄複賽_02南南見島
#include<iostream>
#include<string> 
using namespace std;

int main(){
	long long int x,y,maxx,maxy,minx,miny;
	cin >> x >> y;
	cin >> minx >> miny >> maxx >> maxy;
	long long int ans;
	if (x<minx) ans += (minx-x);
	if (x>maxx) ans += (x-maxx);
	if (y<miny) ans += (miny-y);
	if (y>maxy) ans += (y-maxy);
	cout << ans;
	return 0;
}
	




