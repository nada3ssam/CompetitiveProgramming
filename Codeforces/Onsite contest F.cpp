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
int power(int n)
{
	int p=1;
	for (int i = 0; i < n; i++)
		p*=2;
	return p;
}
int main()
{
	Fast();
	string s;
	cin>>s;
	vector<int>v(s.size(),0);
	ll A[26];
	for (int i = 0; i < 26; i++)
		cin>>A[i];
	int idx=0;
	for (int i = 0; i < s.size(); i++)
	{
		int k=0;
		idx=i;
		while(s[i]=='?' && s.size()>i)
		{
			v[idx]++;
			i++;
			k++;
		}
		if(i<s.size() && k)
			i--;
	}
	int sum1=0;
	for (int i = 0; i < s.size(); i++)
		sum1+=v[i];
	if(sum1==s.size())
	{
	    cout<<0<<endl;
		for (int i = 0; i < s.size(); i++)
			cout<<'a';
		cout<<endl;
	}
	else
	{
		string x="";
		ll sum=0;
		for (int i = 0; i < s.size(); i++)
		{
			if(v[i] && i==0)
			{
				char z;
				int Q=v[i];
				for(int j=0;j<26;j++)
				{
					if(A[j]==A[s[i+v[i]]-'a'])
					{
						z=j+'a';
						break;
					}
				}
				while (Q--)
				{
					x+=z;
					i++;
				}
				i--;
			}
			else if(v[i])
			{
				if(v[i]+i<s.size())
				{
					char z;
					int Q=v[i],min=1e9;
					for(int j=0;j<26;j++)
					{
						if(abs(A[j]-A[s[i+v[i]]-'a']) + abs(A[j]-A[s[i-1]-'a'])<min)
						{
						    min=abs(A[j]-A[s[i+v[i]]-'a']) + abs(A[j]-A[s[i-1]-'a']);
							z=j+'a';
						}
					}
					while (Q--)
					{
						x+=z;
						i++;
					}
					i--;
				}
				else
				{
					char z;
					for(int j=0;j<26;j++)
					{
						if(A[j]==A[s[i-1]-'a'])
						{
							z=j+'a';
							break;
						}
					}
					while (i<s.size())
					{
						x+=z;
						i++;
					}
				}
			}
			else
				x+=s[i];
		}
		for (int i = 1; i < s.size(); i++)
			sum+=(abs(A[x[i]-'a']-A[x[i-1]-'a']));
		cout<<sum<<endl<<x<<endl;
	}

	return 0;
}