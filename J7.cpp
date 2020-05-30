#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        double p,s;
        cin>>p>>s;
        double l=(p-sqrt(p*p-24*s))/12;
	    double vol=(double)((l*s)/2 + (l*l*l) - (l*l*p)/4);
	    cout<<vol<<endl;
        
    }
	// your code goes here
	return 0;
}
