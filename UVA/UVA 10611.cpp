#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
typedef long long ll;
typedef long double ld;
const double EPS = (1e-7);
const ll OO = 1e8;
using namespace std;
void Fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}
int A[50001],n;
int BS_shorter(int end,int value)
{
	int start=0,x=-1;
	while (true)
	{
		int mid=(start+end)/2;
		if(A[mid]<value)
		{
			start=mid+1;
			if(mid>-1 && mid<n)
			    x=A[mid];
		}
		else
			end=mid-1;
		if(end<start)
		    return x;
	}
}
int BS_taller(int end,int value)
{
	int start=0,x=-1;
	while (true)
	{
		int mid=(start+end)/2;
		if(A[mid]<=value)
			start=mid+1;
		else
		{
			end=mid-1;
			if(mid>-1 && mid<n)
			    x=A[mid];
		}
		if(end<start)
		    return x;
	}
}
int main()
{
	Fast();
	cin>>n;
	for (int i = 0; i < n; i++)
		cin>>A[i];
	int q;
	cin>>q;
	while (q--)
	{
		int x;
		cin>>x;
		if(BS_shorter(n,x)==-1)
			cout<<"X"<<" ";
		else
			cout<<BS_shorter(n,x)<<" ";
		if(BS_taller(n,x)==-1)
			cout<<"X"<<endl;
		else
			cout<<BS_taller(n,x)<<endl;
	}
	return 0;
}