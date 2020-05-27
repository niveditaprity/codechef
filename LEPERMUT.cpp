#include <iostream>
using namespace std;

int main() {
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
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(arr[i]>arr[j])
	            {
	                sum++;
	            }
	        }
	    }
	    int count=0;
	    for(int i=1;i<n;i++)
	    {
	      if(arr[i-1]>arr[i]) 
	      {
	          count++;
	      }
	    }
	    if(sum==count)
	    {
	     cout<<"YES"<<endl;   
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}// your code goes here
	return 0;
}
