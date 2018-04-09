#include<iostream>
#include<bitset>
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
ll Com,n,A[21],Sum[1048577][2];
int t;
ll v[1048577][21];
int main()
{
	Fast();
	while(cin>>n>>t)
	{
		for (int i = 0; i < t; i++)
			cin>>A[i];
		Com=power(t);
		for (int i = 0; i < Com; i++)
		{
			bitset<32>a(i);
			ll sum=0;
			int idx=0;
			for (int j = 0; j < t; j++)
			{
				if(a[j] && A[j])
				{
					v[i][idx]=A[j];
					idx++;
					sum+=A[j];
				}
			}
			Sum[i][0]=sum;
			Sum[i][1]=idx;
		}
		ll Max=-2000000000000000000;
		int INDEX,indx=-1;
		for (int i = 0; i < Com; i++)
		{
			if(((Sum[i][0]>Max) ||(Sum[i][0]==Max && Sum[i][1]>indx))  && Sum[i][0]<=n)
			{
    				Max=Sum[i][0];
    				INDEX=i;
    				indx=Sum[i][1];
			}
		}
		for (int i = 0; i < indx; i++)
			cout<<v[INDEX][i]<<" ";
		cout<<"sum:"<<Max<<endl;
	}
	return 0;
}