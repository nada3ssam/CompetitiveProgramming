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
	getline(cin,s);
	x=s;
	int idx=0;
	for (int i = 0; i < s.size(); i++)
	{
		if(isalpha(s[i]))
		{
			x[idx]=s[i];
			idx++;
		}
		else if(s[i]==' ')
		{
			x[idx]=' ';
			idx++;
			bool c=false;
			while(s[i]==' ')
			{
				i++;
				c=true;
			}
			if(c)
				i--;
		}
		else
		{
			if(x[idx-1]==' ')
				x[idx-1]=s[i];
			else
			{
				x[idx]=s[i];
				idx++;
			}
			if(s[i+1]!=' ')
			{
				x[idx]=' ';
				idx++;
			}
		}
	}
	for (int i = 0; i < idx; i++)
		cout<<x[i];
	cout<<endl;
	return 0;
}