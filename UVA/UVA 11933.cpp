#include<iostream>
#include<bitset>
#include<cmath>
#include<algorithm>
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
	int n;
	while (cin>>n && n)
	{
		int c=0;
		bitset<32>a(n),x,y;
		for (int i = 0; i < a.size(); i++)
		{
			if(a[i])
			{
				c++;
			if(c%2==0 && c>0)
				y[i]=1;
			else if(c%2)
				x[i]=1;
			}
		}
		ll X=0,Y=0;
		for (int i = 0; i < 32; i++)
			if(x[i])
				X+=(power(i));
		for (int i = 0; i < 32; i++)
			if(y[i])
				Y+=(power(i));
		cout<<X<<" "<<Y<<endl;
	}
	return 0;
}