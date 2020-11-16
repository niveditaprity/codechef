#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int root=0;
	    while(n--)
	    {
	       int p,q;
	       cin>>p>>q;
	       root+=(p-q);
	    }
	    cout<<root<<endl;
	}// your code goes here
	return 0;
}
