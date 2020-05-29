#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int m=INT_MAX;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            int y=n/i;
            m=min(m,abs(y-i));
            
        }
    }
    cout<<m<<endl;
}
    // your code goes here
	return 0;
}
