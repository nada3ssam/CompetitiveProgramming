#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<queue>
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
int main()
{
	Fast();
	int n;
	while (cin>>n && n)
	{
		priority_queue<ll> q;
		ll sum=0;
		for (int i = 0; i < n; i++)
		{
			ll x;
			cin>>x;
			q.push((x*-1));
		}
		while (!q.empty())
		{
			ll s=(q.top()*-1);
			q.pop();
			if(q.empty())
			{
				sum+=s;
				break;
			}
			s+=(q.top()*-1);
			q.pop();
			if(q.empty())
			{
				sum+=s;
				break;
			}
			q.push((s*-1));
			sum+=s;
		}
		cout<<sum<<endl;
	}
	return 0;
}