#include<iostream>
#include<set>
#include<map>
#include<cmath>
#include<algorithm>
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
	int n;
	cin>>n;
	while (n--)
	{
		map<string,string>m1,m2;map<string,string>::iterator it,ir;
		set<string>PLUS,MINUS,CHANGED_VALUE;set<string>::iterator ie;
		string x,y;
		cin>>x>>y;
		for (int i = 0; i < x.size(); i++)
		{
			string z="",z1="";
			while (isalpha(x[i]) && x[i]!='}')
			{
				z+=x[i];
				i++;
				if(i<x.size()-1 && x[i]==':')
				{
					i++;
					while (x[i]>='0' && x[i]<='9')
					{
						z1+=x[i];
						i++;
					}
				}
			}
			if(z!="")
				m1[z]=z1;
		}
		for (int i = 0; i < y.size(); i++)
		{
			string z="",z1="";
			while (isalpha(y[i]) && y[i]!='}')
			{
				z+=y[i];
				i++;
				if(i<y.size()-1 && y[i]==':')
				{
					i++;
					while (y[i]>='0' && y[i]<='9')
					{
						z1+=y[i];
						i++;
					}
				}
			}
			if(z!="")
				m2[z]=z1;
		}
		for(it=m1.begin();it!=m1.end();++it)
		{
			if(m2.find(it->first)==m2.end())
				MINUS.insert(it->first);
			else
			{
				if(m2[it->first]!=it->second)
					CHANGED_VALUE.insert(it->first);
			}
		}
		for(ir=m2.begin();ir!=m2.end();++ir)
		{
			if(m1.find(ir->first)==m1.end())
				PLUS.insert(ir->first);
			else 
			{
				if(m1[ir->first]!=ir->second)
					CHANGED_VALUE.insert(ir->first);
			}
		}
		if(MINUS.size()+PLUS.size()+CHANGED_VALUE.size())
		{
			if(PLUS.size())
			{
				cout<<"+";
				for (ie=PLUS.begin();ie!=PLUS.end();ie++)
				{
					if(ie==PLUS.begin())
						cout<<*ie;
					else
						cout<<","<<*ie;
				}
				cout<<endl;
			}
			if(MINUS.size())
			{
				cout<<"-";
				for (ie=MINUS.begin();ie!=MINUS.end();ie++)
				{
					if(ie==MINUS.begin())
						cout<<*ie;
					else
						cout<<","<<*ie;
				}
				cout<<endl;
			}
			if(CHANGED_VALUE.size())
			{
				cout<<"*";
				for (ie=CHANGED_VALUE.begin();ie!=CHANGED_VALUE.end();ie++)
				{
					if(ie==CHANGED_VALUE.begin())
						cout<<*ie;
					else
						cout<<","<<*ie;
				}
				cout<<endl;
			}
		}
		else
			cout<<"No changes"<<endl;
cout<<endl;
	}
	return 0;
}