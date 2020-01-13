//c830_2018高雄複賽高職_01小數加法
#include <bits/stdc++.h>
using namespace std;

int find_pos(string s){
	int pos = 0;
	while(pos < s.length() && s[pos] != '.' )
		pos++;
	return pos;
}
string format(string s){
	string news = "";
	int pos = find_pos(s);
	news += string(8-pos,'0');
	news += s;
	if(pos == s.length())
		news += '.';
	news += string(14-news.length(),'0');
	return news;
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s1,s2,ans;
	cin >> s1 >> s2;
	s1 = format(s1);
	s2 = format(s2);
	ans = string(14,'0');
 
	for (int i=13;i>=0;i--){
		if(i==8)ans[i]='.';
		else{
			ans[i] = ans[i]-'0'+s1[i]+s2[i]-'0';//s1[i]-'0'+s2[i]-'0'+'0'
			if (ans[i]>='7'){
				ans[i] = ans[i] -'7' + '0';
				if(i==9)ans[7] = '1';
				else ans[i-1] = '1';
			}
		}
		
	}
	
	int a=0,te=0;
	for(int i=0;i<8;i++){
		if (ans[i]!='0')te=1;
		if ((ans[i]=='0')&&(te==0))continue;
		cout << ans[i];
	}
	for (int i=13;i>=9;i--){
		if (ans[i]!='0') {
			a=i;
			break;
		}
	}
	if ((te==0)&&(a!=0))cout << '0'; 
	if (a!=0){
		cout << '.';
		for (int i=9;i<=a;i++){
			cout << ans[i];
		}
	}


	return 0;
}
