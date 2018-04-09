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
int A[10000][2];
int main()
{
	Fast();
	int s,n;
	cin>>s>>n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 2; j++)
			cin>>A[i][j];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if(A[j][0]>A[j+1][0] || (A[j][0]==A[j+1][0] && A[j][1]<A[j+1][1]))
			{
				swap(A[j][0],A[j+1][0]);
				swap(A[j][1],A[j+1][1]);
			}
		}
	}
	bool c=false;
	for (int i = 0; i < n; i++)
	{
		if(A[i][0]<s)
			s+=A[i][1];
		else
		{
			c=true;
			break;
		}
	}
	if(!c)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}