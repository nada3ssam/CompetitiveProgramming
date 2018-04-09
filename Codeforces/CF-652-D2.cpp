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
	int n,A[4000],i=0;
	deque<int> dq;
	cin>>n;
	for (int i = 0; i < n; i++)
		cin>>A[i];
	sort(A,A+n);
	for (int i = 0; i < n; i++)
		dq.push_back(A[i]);
	while (!dq.empty())
	{
		cout<<dq.front()<<" ";
		dq.pop_front();
		if(dq.empty())
			break;
		cout<<dq.back()<<" ";
		dq.pop_back();
	}
	cout<<endl;
	return 0;
}