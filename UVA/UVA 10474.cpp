#include <iostream>
#include<algorithm>
#include<cmath>
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
typedef long long ll;
typedef long double ld;
const double EPS = (1e-7);
const ll OO = 1e8;
using namespace std;
int A[100001],n;
void Fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}
int binary_search1(int end,int value)
{
	int start=0,index;
	bool c=false;
	while (start<=end)
	{
		int mid=start+(end-start)/2;
		if(mid<n && A[mid]<value)
			start=mid+1;
		else if(mid<n && A[mid]>value)
			end=mid-1;
		else if(mid<n && A[mid]==value)
		{
			end=mid-1;
			c=true;
			index=min(mid,index);
		}
		else
		    start=end+1;
	}
	if(c)
		return (index+1);
	return -1;
}
int main()
{
	Fast();
	int q,z=1;
	while (cin>>n>>q && (n || q))
	{
		for (int i = 0; i < n; i++)
			cin>>A[i];
		sort(A,A+n);
		cout<<"CASE# "<<z<<":"<<endl;
		while (q--)
		{
			int x;
			cin>>x;
			if(binary_search1(n,x)!=-1)
				cout<<x<<" found at "<<binary_search1(n,x)<<endl;
			else
				cout<<x<<" not found"<<endl;
		}
		z++;
	}
	return 0;
}