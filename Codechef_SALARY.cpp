#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        
    }
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    
    int r=sum-n*min;
    cout<<r<<endl;
    }// your code goes here
	return 0;
}
