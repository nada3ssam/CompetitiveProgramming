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
	string s;
	while (getline(cin,s,'\n'))
	{
		int c=0;
		for (int i = 0; i < s.size(); i++)
		{
			bool d=false;
			while (isalpha(s[i]))
			{
				d=true;
				i++;
				if(i==s.size())
					break;
			}
			if(d)
				c++;
		}
		cout<<c<<endl;
	}
	return 0;
}