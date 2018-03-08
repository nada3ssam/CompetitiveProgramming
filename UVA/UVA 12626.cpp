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
	int t;
	cin>>t;
	while (t--)
	{
		string s;
		cin>>s;
		int A[6]={0};
		for (int i = 0; i < s.size(); i++)
		{
			if(s[i]=='M')
				A[0]++;
			else if(s[i]=='A')
				A[1]++;
			else if(s[i]=='R')
				A[2]++;
			else if(s[i]=='G')
				A[3]++;
			else if(s[i]=='I')
				A[4]++;
			else if(s[i]=='T')
				A[5]++;
		}
		A[1]/=3;
		A[2]/=2;
		cout<<*min_element(A,A+6)<<endl;
	}
	return 0;
}