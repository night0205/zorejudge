//b900_2016��������_03į�ʤp��
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
	//�o�̥X�ӬO�L�̦ۤv����l 
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
	//�D�حn���O i �̫�쪺��l 
	int ans[w];
	for(int i=0; i<w; i++){
		ans[pe[i]-1] = i+1;
	}

	for(int i=0; i<w; i++){
		cout <<ans[i]<< " " ; 
	}
	return 0;
} 
