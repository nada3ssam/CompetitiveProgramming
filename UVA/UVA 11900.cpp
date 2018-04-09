#include<iostream>
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
int power(int n)
{
	int p=1;
	for (int i = 0; i < n; i++)
		p*=2;
	return p;
}
int main()
{
	Fast();
	int t,l=1;
	cin>>t;
	while (t--)
	{
		int n,p,q,A[50];
		cin>>n>>p>>q;
		for (int i = 0; i < n; i++)
			cin>>A[i];
		int sum=0,c=0;
		for (int i = 0; i < n && c<p && sum+A[i]<=q; i++)
		{
			sum+=A[i];
			c++;
		}
		cout<<"Case "<<l<<": "<<c<<endl;
		l++;
	}
	return 0;
}