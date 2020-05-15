#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s,v,p;
        int max=0;
        for(int i=1;i<=n;i++)
        {
            cin>>s>>p>>v;
            int profit=0;
             profit=v*(p/(s+1));
            if(max<profit)
            {
                max=profit;
            }
        }
        cout<<max<<endl;
        
    }
	// your code goes here
	return 0;
}
