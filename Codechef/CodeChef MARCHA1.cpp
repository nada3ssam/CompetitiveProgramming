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
int main()
{
	Fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,A[20];
		bool B[20001]={false};
		cin>>n>>m;
		for (int i = 0; i < n; i++)
			cin>>A[i];
		int Com=power(n);
		for (int i = 1; i < Com; i++)
		{
			bitset<32>a(i);
			int sum=0;
			for (int j = 0; j < n; j++)
				if(a[j])
					sum+=A[j];
			B[sum]=true;
		}
		if(B[m])
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
} 