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
int power(int n)
{
	int p=1;
	for (int i = 0; i < n; i++)
		p*=2;
	return p;
}
bool A[1000][1000];
int main()
{
	Fast();
	int n;
	while (cin>>n && n)
	{
		int x[1000]={0},y[1000]={0},idx=0,k,w,e,r=0,c=0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin>>A[i][j];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if(A[i][j])
					x[i]++;
		for (int j = 0; j < n; j++)
			for (int i = 0; i < n; i++)
				if(A[i][j])
					y[j]++;
		for (int i = 0; i < n; i++)
		{
			if(x[i]%2)
			{
				r++;
				idx++;
				w=i;
			}
			if(y[i]%2)
			{
				c++;
				idx++;
				k=i;
			}
		}
		if(!idx)
			cout<<"OK"<<endl;
		else if(r==c && idx<3)
			cout<<"Change bit ("<<w+1<<","<<k+1<<")"<<endl;
		else
			cout<<"Corrupt"<<endl;
	}
	return 0;
}