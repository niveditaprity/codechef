#include <bits/stdc++.h>
using namespace std;
#define ll long long
class ctr{
ll n;
vector<ll>bit;
public:
ctr(ll n,ll c)
{
    this->n=n+1;
    bit.assign(n+1,0);
}

ll add(ll i)
{
    ll sum=0;
    for(;i>0;i-= i& -i)
    {
       sum+=bit[i];
    }
    return sum;
}

void sum(ll i,ll k)
{
    for(;i<n;i+= i&-i)
{
    bit[i]+=k;
}
}
void sum_range(ll u,ll v,ll k)
{
    sum(u,k);
    sum(v+1,-k);
}
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n ,m,ct,a,b,c,p;
cin>>n>>m>>ct;
ctr ptr(n,ct);
char ch;
while(m--)
{
 cin>>ch;
 if(ch=='S')
 {
     cin>>a>>b>>c;
    ptr.sum_range(a,b,c);
     
 }
 else
 {
     cin>>p;
     ll ans=ptr.add(p)+ct;
   cout<<ans<<"\n"; 
 }
 }// your code goes here
	return 0;
}
