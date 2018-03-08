#include<bits\stdc++.h>
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
ll power(ll x,int p)
{
	ll pw=1;
	for (int i = 0; i < p; i++)
		pw*=x;
	return pw;
}
ll binary_search1(ll n,ll k)
{
	ll s=1,e=n,x1=0;
	while (s<=e)
	{
		ll mid=(s+e)/2,c=0,value=0;
		while (mid>=power(k,c))
		{
			value+=((ll)(mid/power(k,c)));
			c++;
		}
		if(value>n)
		{
			e=mid-1;
			x1=mid;
		}
		else if(value<n)
			s=mid+1;
		else
			return mid;
	}
	return x1;
}
int main()
{
	Fast();
	ll n,k;
	cin>>n>>k;
	if(n<=k)
		cout<<n<<endl;
	else
		cout<<binary_search1(n,k)<<endl;
	return 0;
}