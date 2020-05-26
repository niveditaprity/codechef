#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
     int n,total;
     cin>>n>>total;
     int b[n];
     for(int i=0;i<n;i++)
     {
         cin>>b[i];
     }
     int k=1<<n;
     int flag=0;
     for(int i=0;i<k;i++)
     {
         int sum=0;
         for(int j=0;j<n;j++)
         {
             if(i&(1<<j))
             {
             
             sum=sum+b[j];
             }
         }
         if(sum==total)
         {
             flag=1;
         }
         }
         if(flag==0)
         {
             
            cout<<"No"<<endl;
         }
         else
         {
             cout<<"Yes"<<endl;
         }
         
    
    }
	// your code goes here
	return 0;
}
