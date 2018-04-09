#include<iostream>
#include<deque>
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
	while (cin>>n && n)
	{
		deque<int>d,q;
		for (int i = 1; i < n+1; i++)
			d.push_back(i);
		while(d.size()>1)
		{
			q.push_back(d.front());
			d.pop_front();
			if(d.size()==1)
				break;
			d.push_back(d.front());
			d.pop_front();
		}
		cout<<"Discarded cards:";
                if(q.size())
                      cout<<" ";
                else
                      cout<<endl;
		while(q.size()>1)
		{
			cout<<q.front()<<", ";
			q.pop_front();
		}
		if(q.size())
			cout<<q.front()<<endl;
		cout<<"Remaining card: "<<d.front()<<endl;
	}
	return 0;
}