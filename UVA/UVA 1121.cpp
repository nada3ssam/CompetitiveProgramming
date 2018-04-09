#include <iostream>
#include<cmath>
#include<algorithm>
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
typedef long long ll;
typedef long double ld;
const double EPS = (1e-7);
const ll OO = 1e8;
using namespace std;

void Fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}
int A[200000];
int main()
{
	Fast();
	int n,S;
	while (cin>>n>>S)
	{
		for (int i = 0; i < n; i++)
		    cin>>A[i];
		int l=0,r=0,Min=1e9,k=1e9,c=0;
		ll sum=0;
		while (l<n)
		{
			while (r<n && sum<S)
			{
				sum+=A[r];
				r++;
			}
			sum-=A[l];
			l++;
			if(sum>=S)
			{
				k=r-l;
				c++;
			}
			else if(sum+A[l-1]>=S)
			{
				k=r;
				c++;
			}
			Min=min(Min,k);
		}
		if(!c)
			cout<<0<<endl;
		else
			cout<<Min<<endl;
	}
	return 0;
}