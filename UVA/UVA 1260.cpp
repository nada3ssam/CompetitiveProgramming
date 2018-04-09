#include<iostream>
#include<cmath>
#include<algorithm>
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
	int t;
	cin>>t;
	while(t--)
	{
		int A,B,C;
		bool c=false;
		cin>>A>>B>>C;
		int x=max(C,max(A,B));
		int Max=sqrt(x)+1;
		int Maxx=Max-(2*Max);
		for (int i = -1; i >= Maxx; i--)
		{
			for (int j = i-1; j >= Maxx; j--)
			{
				int z=A-(i+j);
				if(((i*i)+(j*j)+(z*z)==C) && (i*j*z==B) && (z!=i && z!=j))
				{
					printf("%d %d %d",j,i,z);
					printf("\n");
					c=true;
					break;
				}
			}
			if(c)
				break;
		}
		for (int i = 1; i <= Max && !c; i++)
		{
			for (int j = i+1; j <= Max; j++)
			{
				int z=A-(i+j);
				if(((i*i)+(j*j)+(z*z)==C) && (i*j*z==B) && (z!=i && z!=j))
				{
					printf("%d %d %d",i,j,z);
					printf("\n");
					c=true;
					break;
				}
			}
			if(c)
				break;
		}
		if(!c)
			printf("No solution.\n");
	}
	return 0;
}