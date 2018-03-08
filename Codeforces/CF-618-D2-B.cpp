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
	int n,A[60][60],B[60];
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		int Max=INT_MIN;
		for (int j = 0; j < n; j++)
		{
			cin>>A[i][j];
			if(A[i][j]>Max)
				Max=A[i][j];
		}
		B[i]=Max;
	}
	for (int i = 0; i < n; i++)
		if(B[i]==n-1)
		{
			B[i]++;
			break;
		}
	for (int i = 0; i < n-1; i++)
		cout<<B[i]<<" ";
	cout<<B[n-1]<<endl;
	return 0;
}