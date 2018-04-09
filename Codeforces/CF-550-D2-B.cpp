#include<bits\stdc++.h>
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
typedef long long ll;
typedef long double ld;
using namespace std;
int power(int n)
{
	int p=1;
	for (int i = 0; i < n; i++)
		p*=2;
	return p;
}
void Fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}
ll A[20];
int main()
{
	Fast();
	int n,L,R,x,c=0;
	cin>>n>>L>>R>>x;
	for (int i = 0; i < n; i++)
		cin>>A[i];
	int Com=power(n);
	sort(A,A+n);
	for (int i = 0; i <= Com; i++)
	{
		ll sum=0,diff=0,idx=0;
		int B[64];
		bitset<64>a(i);
		for (int j = 0; j < n; j++)
		{
			if(a[j])
			{
				sum+=A[j];
				B[idx]=j;
				idx++;
			}
		}
		if(idx!=0)
			diff=abs(A[B[0]]-A[B[idx-1]]);
		if(sum>=L && sum<=R && diff>=x)
			c++;
	}
	cout<<c<<endl;
	return 0;
}