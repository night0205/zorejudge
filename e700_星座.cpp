//e700: ¬P®y

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
		if((bron>=1223)||(bron<=120))cout << "¼¯½~®y";
		else if(bron<=219)cout << "¤ô²~®y";
		else if(bron<=320)cout << "Âù³½®y";
		else if(bron<=420)cout << "¨d¦Ï®y";
		else if(bron<=521)cout << "ª÷¤û®y";
		else if(bron<=621)cout << "Âù¤l®y";
		else if(bron<=722)cout << "¥¨ÃÉ®y";
		else if(bron<=821)cout << "·à¤l®y";
		else if(bron<=923)cout << "³B¤k®y";
		else if(bron<=1023)cout << "¤Ñ¯¯®y";
		else if(bron<=1122)cout << "¤ÑÃÈ®y";
		else if(bron<=1222)cout << "®g¤â®y";
		cout << '\n';
	//}
}
