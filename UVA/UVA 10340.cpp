#include<iostream>
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
	string x,y;
	while(cin>>x>>y)
	{
		int c=0,k=0;
		for (int i = 0; i < x.size(); i++)
		{
			for (int j = k; j < y.size(); j++)
			{
				if(y[j]==x[i])
				{
					c++;
					k=j+1;
					break;
				}
			}
		}
		if(c==x.size())
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}