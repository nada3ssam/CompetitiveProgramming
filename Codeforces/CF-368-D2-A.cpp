#include<bits\stdc++.h>
//#include<iostream>
//#include<algorithm>
//#include<cmath>
//#include<string>
//#include<set>
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
int A[1000000],B[1000000],C[1000000];
int main()
{
	Fast();
	int n,m,c=0;
	cin>>n>>m;
	for (int i = 0; i < n; i++)
	{
		cin>>A[i];
		if(!B[A[i]])
			c++;
		B[A[i]]++;
	}
	C[0]=c;
	for (int i = 1; i < n; i++)
	{
		if(!--B[A[i-1]])
		{
			c--;
			C[i]=c;
		}
		else
			C[i]=c;
	}
	while (m--)
	{
		int x;
		cin>>x;
		cout<<C[x-1]<<endl;
	}
	return 0;
}