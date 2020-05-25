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
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    //int speed[n];
	   int count=1;
	    for(int i=1;i<n;i++)
	    {
	     if(arr[i-1]<arr[i])
	     {
	        arr[i]=arr[i-1];
	    }
	    else
	    {
	        count++;
	    }
	    }
	    
	cout<<count<<endl;
	}// your code goes here
	return 0;
}
