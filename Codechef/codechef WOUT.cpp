#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<set>
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
ll PF[2000000];
int main()
{
	Fast();
	int t,q=0;
	cin>>t;
	while (t--)
	{
		int n,H;
		cin>>n>>H;
		for (int i = 0; i < q; i++)
			PF[i]=0;
		for (int i = 0; i < n; i++)
		{
			int l,h;
			cin>>l>>h;
			PF[l]++;
			PF[h+1]--;
		}
		for (int i = 1; i < n; i++)
			PF[i]+=PF[i-1];
		for (int i = 1; i < n; i++)
			PF[i]+=PF[i-1];
		ll Max=PF[H-1];
		for (int i = H; i < n; i++)
			Max=max(Max,PF[i]-PF[i-H]);
		cout<<(n*H)-Max<<endl;
		q=n;
	}
	return 0;
}
