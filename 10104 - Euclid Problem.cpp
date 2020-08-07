#include<bits/stdc++.h>
#define ll long long int
#define ll long long int
using namespace std;

ll e(ll a,ll b,ll *x,ll *y)
{
	if(b==0)
	{
		*x=1;
		*y=0;
		return a;
	}
	ll x1,y1;
	ll d=e(b,a%b,&x1,&y1);
	*x=y1;
	*y=x1-y1*(a/b);
	return d;
}

int main()
{
	ll a,b;
	while(cin>>a>>b)
	{
		ll x,y;
		ll g=e(a,b,&x,&y);
		cout<<x<<" "<<y<<" "<<g<<"\n";
	}
}
