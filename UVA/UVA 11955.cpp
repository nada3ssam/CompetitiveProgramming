#include<iostream>
#include<stack>
#include<queue>
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
	while (cin>>n)
	{
		int idx=0,p=0,q=0,s=0;
		priority_queue<int>PR;
		queue<int>Q;
		stack<int>S;
		bool queue=false,stack=false,pq=false,M=false;
		while (n--)
		{
			int x,y;
			cin>>x>>y;
			if(x==1)
			{
				Q.push(y);
				PR.push(y);
				S.push(y);
			}
			if(x==2)
			{
				if(!Q.empty() && y==Q.front())
				{
					q++;
					Q.pop();
				}
				if(!S.empty() && y==S.top())
				{
					s++;
					S.pop();
				}
				if(!PR.empty() && y==PR.top())
				{
					p++;
					PR.pop();
				}
				idx++;
			}
		}
		if(p==idx)
			pq=true;
		if(s==idx)
			stack=true;
		if(q==idx)
			queue=true;
		if((stack && queue) || (stack && pq) || (queue && pq))
			M=true;
		if(queue && !stack && !pq)
			cout<<"queue"<<endl;
		else if(stack && !pq && !queue)
			cout<<"stack"<<endl;
		else if(pq && !queue && !stack)
			cout<<"priority queue"<<endl;
		else if(M)
			cout<<"not sure"<<endl;
		else
			cout<<"impossible"<<endl;
	}
	return 0;
}