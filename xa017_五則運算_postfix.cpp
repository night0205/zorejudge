#include <iostream>
#include <string>

using namespace std;

string s;
int postfix[1000000];
string stack[1000000];

void to_postfix(int &pl){
	int l = s.length();
	int sl = 0;
	for(int i = 0; i < l; i++){
		if(s[i]-'0'>=0 && s[i]-'0'<=9){
			int num = 0;
			for(int j = i; j < l; j++,i++)
				num = num*10 + s[i] - '0'; 
			postfix[pl++] = num;
		}
		else{
			if(sl == 0)stack[sl++] = s[i];
			else if(s[i] == '(')stack[sl++] = s[i];
			else if(s[i] == ')'){
				postfix[pl++] = stack[--sl]*-1;
				sl--;
				if(sl > 0)postfix[pl++] = stack[sl--]*-1;	

			}
			else if(s[i] == '*'||s[i] == '/' ){


			}

		}	
	}	

}

main(){
	while(cin >> s){
		int pl = 0;
		to_postfix(pl);	
	}
}
