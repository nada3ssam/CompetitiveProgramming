#include<iostream>
#include<algorithm>
#include<cmath>
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
int A[2000001];
int main()
{
	Fast();
	int n;
	while (scanf("%d",&n) && n)
	{
		for (int i = 0; i < n; i++)
			scanf("%d",A+i);
		sort(A,A+n);
		for (int i = 0; i < n-1; i++)
			printf("%d ",A[i]);
		printf("%d\n",A[n-1]);
	}
	return 0;
}