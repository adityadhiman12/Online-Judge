#include<bits/stdc++.h>
#define ll long long int
#define end "\n"
using namespace std;

ll exp(ll a,ll b,ll m)
{
	a%=m;
	ll res=1;
	while(b>0)
	{
		if(b&1)
			res=res*a%m;
		a=a*a%m;
		b>>=1;	
	}
	return res;	
}


int main()
{
	ll b,p,m;
	string s;
	while(cin>>b>>p>>m)
	{
		ll r=exp(b,p,m);
		r=r%m;
		cout<<r<<endl;
	}
}
