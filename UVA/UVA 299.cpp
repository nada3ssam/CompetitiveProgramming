#include<iostream>
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
int A[100];
int main()
{
	Fast();
	int n;
	scanf("%d",&n);
	while (n--)
	{
		int c=0,L;
		scanf("%d",&L);
		for (int i = 0; i < L; i++)
			scanf("%d",A+i);
		for (int i = 0; i < L; i++)
		{
			for (int j = 0; j < L-1; j++)
			{
				if(A[j]>A[j+1])
				{
					swap(A[j],A[j+1]);
					c++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",c);
	}
	return 0;
}