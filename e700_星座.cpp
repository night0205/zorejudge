//e700: �P�y

#include<iostream>
#include<string>

using namespace std;

main(){
	string s;
	//while(cin >> s){
		int bron;
		if(s.length()==5){
			bron = s[0]*1000+s[1]*100+s[3]*10+s[4];
		}
		else if(s[1]=='/'){
			bron = s[0]*100+s[2]*10+s[3];
		}
		else if(s[2]=='/'){
			bron = s[0]*1000+s[1]*100+s[3];
		}
		else{
			bron = s[0]*100+s[2];
		}
		cout << bron;
		if((bron>=1223)||(bron<=120))cout << "���~�y";
		else if(bron<=219)cout << "���~�y";
		else if(bron<=320)cout << "�����y";
		else if(bron<=420)cout << "�d�Ϯy";
		else if(bron<=521)cout << "�����y";
		else if(bron<=621)cout << "���l�y";
		else if(bron<=722)cout << "���ɮy";
		else if(bron<=821)cout << "��l�y";
		else if(bron<=923)cout << "�B�k�y";
		else if(bron<=1023)cout << "�ѯ��y";
		else if(bron<=1122)cout << "���Ȯy";
		else if(bron<=1222)cout << "�g��y";
		cout << '\n';
	//}
}
