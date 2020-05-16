#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,ans;
        cin>>n>>x;
        ans=x;
        for(int i=1;i<n;i++)
        {
            long long q;
            cin>>q;
            x=min(q,x);
            ans+=x;
        }
        cout<<ans<<endl;
        
    }
	// your code goes here
	return 0;
}
