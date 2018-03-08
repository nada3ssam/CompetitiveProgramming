//#include<bits\stdc++.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<set>
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
typedef long long ll;
typedef long double ld;
using namespace std;
void Fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}
int main()
{
	Fast();
	set<string>st;set<string>::iterator it;
	string s;
	while (getline(cin,s,'\n'))
	{
		for (int i = 0; i < s.size(); i++)
		{
			string x="";
			while (isalpha(s[i]))
			{
				if(isupper(s[i]))
					s[i]+=32;
				x+=s[i];
				i++;
				if(i==s.size())
					break;
			}
			if(!x.empty())
				st.insert(x);
		}
	}
	for(it=st.begin();it!=st.end();++it)
		cout<<*it<<endl;
	return 0;
}