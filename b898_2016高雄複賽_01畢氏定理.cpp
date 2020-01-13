//b898_高雄複賽_01畢氏定理
#include<iostream>
#include<string> 
using namespace std;

bool bigger(string s1,string s2){
	if (s1.length() == s2.length()){
		return s1 > s2;
	}
	return s1.length() > s2.length();
}

int main(){
	int a;
	cin >> a;
	for (int i=0; i < a; i++){
		string s[3];
		cin >> s[0] >> s[1] >> s[2];
		if (bigger(s[0],s[1])){
			string temp = s[0];
			s[0] = s[1];
			s[1] = temp;
		}
		if (bigger(s[1],s[2])){
			string temp = s[1];
			s[1] = s[2];
			s[2] = temp;
		}
		cout << s[2] <<endl; 
	}
	return 0;
}
	




