#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
 	    int x,y,k,n;
 	    cin>>x>>y>>k>>n;
 	    int need=x-y;
 	    int flag=0;
 	    while(n--)
 	    {
 	        int p,r;
 	        cin>>p>>r;
 	        if(p>=need &&r<=k)
 	        {
 	          flag=1;
 	        }
 	    }
 	    if(flag==1)
 	    {
 	        cout<<"LuckyChef"<<endl;
 	    }
 	    else
 	    {
 	        cout<<"UnluckyChef"<<endl;
 	    }
	}
	// your code goes here
	return 0;
}
