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
int main()
{
	Fast();
	int n,a;
	bool A[200];
	cin>>n>>a;
	for (int i = 1; i <= n; i++)
		cin>>A[i];
	int c=a-1,b=a+1,k=A[a];
	while (true)
	{
		if(c>0 && b<n+1)
		{
			if(A[c] && A[b])
				k+=2;
		}
		else if(b<n+1 && c<1)
		{
			if(A[b])
				k++;
		}
		else if(b>n && c>0)
		{
			if(A[c])
				k++;
		}
		else
			break;
		c--;
		b++;
	}
	cout<<k<<endl;
	return 0;
}