//b899_2016��������_02���~����
#include <iostream>
using namespace std;
main(){
	int x[3],y[3];
	for (int i;i<3;i++){
 		cin >> x[i] >> y[i];
	}
	//��X abc ��� 
	int side_a = (x[1]-x[2])*(x[1]-x[2])+(y[1]-y[2])*(y[1]-y[2]);
	int side_b = (x[0]-x[2])*(x[0]-x[2])+(y[0]-y[2])*(y[0]-y[2]);
	int side_c = (x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]);
	
	//��X d 
	int d_x,d_y;
	//����T�� 
	if (side_a > side_b && side_a > side_c){
		//��X x,y 
		d_x = x[1]+x[2]-x[0];
		d_y = y[1]+y[2]-y[0];
	}  
	else if (side_b > side_c && side_b > side_a){
		d_x = x[2]+x[0]-x[1];
		d_y = y[2]+y[0]-y[1];
	}
	else{
		d_x = x[0]+x[1]-x[2];
		d_y = y[1]+y[0]-y[2];
	}
	cout << d_x << " "<< d_y;    
}
