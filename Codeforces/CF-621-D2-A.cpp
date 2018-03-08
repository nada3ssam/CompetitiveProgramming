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
	int n;
	ll A[100009],Max=0,idx=0;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		ll x;
		cin>>x;
		if(x%2==0)
			Max+=x;
		else
		{
			A[idx]=x;
			idx++;
		}
	}
	sort(A,A+idx);
	reverse(A,A+idx);
	if(idx%2!=0)
		idx--;
	for (int i = 0; i < idx; i++)
		Max+=A[i];
	cout<<Max<<endl;
	return 0;
}