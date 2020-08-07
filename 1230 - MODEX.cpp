#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll binary(ll a,ll b,ll n)
{
	if(b==0)
		return 1;
	ll res=binary(a,b/2,n);
	if(b%2)
		return (res%n)*(res%n)*a;
	else
		return (res%n)*(res%n);		
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y,n;
		cin>>x>>y>>n;
		ll r=binary(x,y,n);
		r=r%n;
		cout<<r<<"\n";
	}		
	ll z;
	cin>>z;
	
}
