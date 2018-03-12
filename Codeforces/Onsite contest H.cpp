#include<bits\stdc++.h>
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
typedef long long ll;
typedef long double ld;
using namespace std;
int A[200000],PF[200000];
void Fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}
int main()
{
	Fast();
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
		cin>>A[i];
	int q,x=1,c=0;
	cin>>q;
	while (q--)
	{
		int L,R;
		cin>>L>>R;
		PF[L-1]+=x;
		PF[R]+=(x-(2*x));
		x++;
	}
	for (int i = 0; i < n; i++)
		PF[i]+=PF[i-1];
	for (int i = 0; i < n; i++)
		if(!PF[i])
			c++;
	cout<<c<<endl;
	for (int i = 0; i < n-1; i++)
		if(!PF[i])
			cout<<A[i]<<" ";
	if(!PF[n-1])
		cout<<A[n-1]<<endl;
	else if(c!=0)
		cout<<endl;
	return 0;
}