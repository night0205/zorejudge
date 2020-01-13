//c831_2018高雄複賽_02最短路徑
#include <iostream>
using namespace std;
int main(){
	long long x,y,xx,yy,x1,y1,x2,y2,ans,temp;
	cin >> x >> y >> xx >> yy >> x1 >> y1 >> x2 >> y2;
	((x1-x2)<0)? temp = (x1-x2)*-1: temp = (x1-x2);
	((xx-x-temp)>temp)? ans += temp:ans += xx-x-temp;
	temp = 0;
	((y1-y2)<0)? temp = (y1-y2)*-1: temp = (y1-y2);
	((yy-y-temp)>temp)? ans += temp:ans += yy-y-temp;

	cout << ans;
	
} 
