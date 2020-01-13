//b900_2016高雄複賽_03蠕動小蟲
#include <iostream>
#include <string>
using namespace std;

int main(){
	int w, h;
	cin >> w >> h;
	//pe 1~w
	int pe[w];
	for (int i=0;i<w;i++){
		pe[i] = i+1;
	}
	//這裡出來是他們自己的位子 
	for (int i=0; i<h; i++){
		char temp[2*w-1];
		cin >> temp;
		for (int j=0; j<=(2*w-1); j++){
			if (temp[j] == 45){
				int change = pe[j/2];
				pe[j/2] = pe[j/2+1];
				pe[j/2+1] =  change;
				
			}
		}
	}
	//題目要的是 i 最後到的位子 
	int ans[w];
	for(int i=0; i<w; i++){
		ans[pe[i]-1] = i+1;
	}

	for(int i=0; i<w; i++){
		cout <<ans[i]<< " " ; 
	}
	return 0;
} 
