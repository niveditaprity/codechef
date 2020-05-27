#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p;
	    cin>>n>>p;
	    int sum=0;
	   int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    int min=111;
	    for(int i=0;i<n;i++)
	    {
	        if(min>arr[i])
	        {
	         min=arr[i];   
	        }
	    }
	    int r=sum%p;
	    if(r<min)
	    {
	        cout<<sum/p<<endl;
	    }
	    else
	    {
	        cout<<-1<<endl;
	    }
	}// your code goes here
	return 0;
}
