#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int total=(n*(n+1))/2;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum==total)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
	// your code goes here
	return 0;
}
