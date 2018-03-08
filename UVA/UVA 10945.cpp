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
	while (1)
	{
		string s,y="",x="";
		getline(cin,s,'\n');
		if(s=="DONE")
			break;
		for (int i = 0; i < s.size(); i++)
		{
			if(isalpha(s[i]))
			{
				if(isupper(s[i]))
					s[i]+=32;
				y+=s[i];
			}
		}
		x=y;
		reverse(all(y));
		if(x==y)
			cout<<"You won't be eaten!"<<endl;
		else
			cout<<"Uh oh.."<<endl;
	}
	return 0;
}