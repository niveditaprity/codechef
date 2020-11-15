#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
map<ll,ll>dp;
ll change(ll n){
if(n==0)
{
    return 0;
}
if(dp[n]!=0)
{
    return dp[n];
}
ll t=change(n/2)+change(n/3)+change(n/4);
if(t>n)
{
    dp[n]=t;
}
else
{
    dp[n]=n;
}
return dp[n];
}

int main() {
    ll  n;
    while(cin>>n)
    {
        cout<<change(n)<<endl;
	}// your code goes here
