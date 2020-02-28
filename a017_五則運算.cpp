#include <iostream>

using namespace std;

string s;

int cnt(int li, int ri){
	int t = 0;
	for(int i = ri-1; i >= li; i--){
		if(s[i] == ')')t++;
		if(s[i] == '(')t--;
		if(s[i] == '+' && t == 0)
			return cnt(li, i-1) + cnt(i+2, ri);
		if(s[i] == '-' && t == 0)
			return cnt(li, i-1) - cnt(i+2, ri);
	}
	t = 0;
	for(int i = ri-1; i >= li; i--){
		if(s[i] == ')')t++;
		if(s[i] == '(')t--;
		if(s[i] == '*' && t == 0)
			return cnt(li, i-1) * cnt(i+2, ri);
		if(s[i] == '/' && t == 0)
			return cnt(li, i-1) / cnt(i+2, ri);
		if(s[i] == '%' && t == 0)
			return cnt(li, i-1) % cnt(i+2, ri);
	}
	if(s[--ri] == ')' && s[li] == '(')return cnt(li+2, ri-1);
	int a = 0;
	for(int i = li; i <= ri; i++)
		a = a*10 + s[i] -'0';
	return a;
}

main(){
	while(getline(cin, s))
		cout << cnt(0, s.length()) << '\n'; 	
}
