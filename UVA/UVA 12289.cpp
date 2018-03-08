//#include<bits\stdc++.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
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
		int c=0,k=0,l=0;
		string s;
		cin>>s;
		if(s.size()==3)
		{
			if(s[0]=='o')
				c++;
			if(s[1]=='n')
				c++;
			if(s[2]=='e')
				c++;
			if(s[0]=='t')
				k++;
			if(s[1]=='w')
				k++;
			if(s[2]=='o')
				k++;
		}
		else
		{
			if(s[0]=='t')
				l++;
			if(s[1]=='h')
				l++;
			if(s[2]=='r')
				l++;
			if(s[3]=='e')
				l++;
			if(s[4]=='e')
				l++;
		}
		if(c==3 || c==2)
			cout<<1<<endl;
		else if(k==3 || k==2)
			cout<<2<<endl;
		else if(l==5 || l==4)
			cout<<3<<endl;
	}
	return 0;
}