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
	string s,x;
	cin>>s>>x;
	for (int i = 0; i < s.size(); i++)
	{
		if(isupper(s[i]))
			s[i]+=32;
		if(isupper(x[i]))
			x[i]+=32;
	}
	if(s==x)
		cout<<0<<endl;
	else if(s>x)
		cout<<1<<endl;
	else
		cout<<-1<<endl;
	return 0;
}