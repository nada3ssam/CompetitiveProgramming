#include<iostream>
#include<queue>
#include<vector>
#include<set>
#include<cmath>
#include<algorithm>
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
int Com;
int main()
{
	Fast();
	int t,n,A[13];
	while (cin>>t>>n && n)
	{
		Com=power(n);
	    for (int i = 0; i < n; i++)
			cin>>A[i];
		bool c=false;
		set<vector<int>>st;set<vector<int>>::iterator it;
		for (int i = 0; i < Com; i++)
		{
			bitset<32>a(i);
			int sum=0;
			priority_queue<int>q;
			for (int j = 0; j < n; j++)
			{
				if(a[j] && A[j])
				{
					sum+=A[j];
					q.push(A[j]);
				}
			}
			vector<int>v;
			if(sum==t)
			{
				while (!q.empty())
				{
					v.push_back(q.top());
					q.pop();
				}
				st.insert(v);
				v.clear();
				c=true;
			}
		}
		cout<<"Sums of "<<t<<":"<<endl;
		if(!c)
		{
			cout<<"NONE"<<endl;
			continue;
		}
		int idx=0;
		vector<vector<int>>v1;
		for(it=st.begin();it!=st.end();it++)
		{
			const vector<int>& l=(*it);
			v1.push_back(l);
			idx++;
		}
		for(int i=idx-1;i>-1;i--)
		{
		    for(int j=0; j<v1[i].size();j++)
		    {
		        cout<<v1[i][j];
		        if(v1[i].size()-1==j)
		            cout<<endl;
		        else
		            cout<<"+";
		    }
		}
	}
	return 0;
}