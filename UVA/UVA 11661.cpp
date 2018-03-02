//#include<bits\stdc++.h>
#include<iostream>
#include<string>
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
int R[2000000],D[2000000];
int main()
{
	Fast();
	while (true)
	{
		int L,idx=0,idd=0;
		string s;
		cin>>L>>s;
		if(!L)
			return 0;
		if(s.find('Z')!=string::npos)
		{
			cout<<'0'<<endl;
			continue;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if(s[i]=='R')
			{
				R[idx]=i;
				idx++;
			}
			if(s[i]=='D')
			{
				D[idd]=i;
				idd++;
			}
		}
		int Min=100000000;
		for (int i = 0; i < idx; i++)
			for (int j = 0; j < idd; j++)
				if(abs(R[i]-D[j])<Min)
					Min=abs(R[i]-D[j]);
		cout<<Min<<endl;
	}
}