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
	int cups=0,medals=0,x;
	for (int i = 0; i < 7; i++)
	{
		cin>>x;
		if(i<3)
			cups+=x;
		else if(i<6)
			medals+=x;
	}
	if(cups%5==0)
		x=x-(cups/5);
	else if(cups%5!=0)
		x=x-(cups/5 +1);
	if(medals%10==0)
		x=x-(medals/10);
	else
		x=x-(medals/10 +1);
	if(x>-1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}