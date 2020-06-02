#include <iostream>
using namespace std;
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int findgcd(int arr[],int n)
{
    int result=arr[0];
    for(int i=1;i<n;i++)
    {
        result=gcd(result,arr[i]);
        if(result==1)
        {
            return 1;
        }
    }
    return result;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<findgcd(arr,n)<<"\n";
    }
	// your code goes here
	return 0;
}
