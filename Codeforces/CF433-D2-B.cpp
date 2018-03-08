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
ll A[200000],B[200000];
int main()
{
	Fast();
	int n;
	cin>>n;
	for (int i = 1; i <= n; i++)
	{
		cin>>A[i];
		B[i]=A[i];
		A[i]+=A[i-1];
	}
	sort(B,B+n+1);
	for (int i = 1; i <= n; i++)
		B[i]+=B[i-1];
	int q;
	cin>>q;
	while (q--)
	{
		int t,l,r;
		cin>>t>>l>>r;
		if(t==1)
			cout<<A[r]-A[l-1]<<endl;
		else if(t==2)
			cout<<B[r]-B[l-1]<<endl;
	}
	return 0;
}