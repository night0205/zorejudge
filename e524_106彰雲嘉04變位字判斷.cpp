//e524_106 ¹ü¶³¹Å°Ï½ÆÁÉ_04ÅÜ¦ì¦r§PÂ_
#include<iostream>
#include<string>
using namespace std;

main(){
	int n;
	cin >> n;
	string ga;
	getline(cin,ga);
	for (int i=0;i<n;i++){
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		int cnt1[26]={0},cnt2[26]={0};
		for(int i=0;i<(s1.length());i++){
			if ((s1[i]>='A')&&(s1[i]<='Z'))cnt1[s1[i]-'A']++;
			else if ((s1[i]>='a')&&(s1[i]<='z'))cnt1[s1[i]-'a']++;

		}
		for(int i=0;i<s2.length();i++){
			if ((s2[i]>='A')&&(s2[i]<='Z'))cnt2[s2[i]-'A']++;
			else if ((s2[i]>='a')&&(s2[i]<='z'))cnt2[s2[i]-'a']++;
		}
		int same = 1;
		for(int i=0;i<26;i++){
			if (cnt1[i]!=cnt2[i])same = 0;
		}	
		cout << same <<'\n';
	}	
	return 0;
}
