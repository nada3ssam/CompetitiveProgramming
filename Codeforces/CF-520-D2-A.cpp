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
	bool A[26]={false};
	int n;
	string s;
	cin>>n>>s;
	for (int i = 0; i < s.size(); i++)
	{
		if(isupper(s[i]))
			s[i]+=32;
		A[s[i]-'a']=true;
	}
	for (int i = 0; i < 26; i++)
	{
		if(!A[i])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}