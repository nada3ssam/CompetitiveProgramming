#include<iostream>
#include<string>
#include<map>
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
int n,m;
int main()
{
	Fast();
	map<string,ll>mp;map<string,ll>::iterator ir;
	cin>>m>>n;
	while (m--)
	{
		ll x;
		string y;
		cin>>y>>x;
		mp[y]=x;
	}
	cin.ignore();
	while (n--)
	{
		ll sum=0;
		map<string,int>mt;map<string,int>::iterator it;
		string s;
		getline(cin,s,'.');
		for (int i = 0; i < s.size(); i++)
		{
			string z="";
			while (s[i]!=' ' && s[i]!='.' && s[i]!='\n')
			{
				z+=s[i];
				i++;
			}
			mt[z]++;
		}
			for(it=mt.begin();it!=mt.end();it++)
			    for (ir=mp.begin();ir!=mp.end();ir++)
				if(ir->first==it->first)
					sum+=(ir->second*it->second);
		cout<<sum<<endl;
	}
	return 0;
}