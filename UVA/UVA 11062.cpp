#include<iostream>
#include<set>
#include<algorithm>
#include<cmath>
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
	string s,x="";
	set<string> st;set<string>::iterator it;
	while (getline(cin,s))
	{
		x+=s;
		x+='\n';
	}
	for (int i = 0; i < x.size(); i++)
		if(isalpha(x[i]) && isupper(x[i]))
			x[i]+=32;
	for (int i = 0; i < x.size(); i++)
	{
		string z="";
		bool c=false;
		while (x[i]!=' ' && i<x.size())
		{
			if(x[i]=='-' && x[i+1]=='\n' && isalpha(x[i+2]))
				i++;
			else if(isalpha(x[i]) || (x[i]=='-' && (isalpha(x[i+1]) || (isalpha(x[i-1])))))
				z+=x[i];
			else
			    break;
			i++;
		}
		if(z!="")
			st.insert(z);
	}
	for(it=st.begin();it!=st.end();++it)
		cout<<*it<<endl;
	return 0;
}