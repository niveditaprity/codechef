#include <iostream>
#include<math.h>
using namespace std;
bool isprime(int n)
{
    if(n<=1)
    {
    return false;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
        return false;
        }
    }
    return true;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    for(int i=a;i<=b;i++)
	    {
	        if(isprime(i))
	        {
	            cout<<i<<endl;
	        }
	    }
	    
	}// your code goes here
	return 0;
}
