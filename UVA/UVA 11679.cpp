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
int main()
{
	Fast();
	while (true)
	{
		ll n,b,B[1000];
		cin>>b>>n;
		if(n==0 && b==0)
			break;
		for (int i = 1; i <= b; i++)
			cin>>B[i];
		while (n--)
		{
			ll D,C,V;
			cin>>D>>C>>V;
			B[D]-=V;
			B[C]+=V;
		}
		bool c=true;
		for (int i = 1; i <= b; i++)
			if(B[i]<0)
				c=false;
		if(c)
			cout<<"S"<<endl;
		else
			cout<<"N"<<endl;
	}
	return 0;
}