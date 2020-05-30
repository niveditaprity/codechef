#include <iostream>
#include<math.h>
using namespace std;
int gcd(int a, int b) 
{ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   
    // base case 
    if (a == b) 
        return a; 
   
    // a is greater 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int l,b;
        cin>>l>>b;
        cout<<gcd(l,b)<<endl;
    
    }
	// your code goes here
	return 0;
}
