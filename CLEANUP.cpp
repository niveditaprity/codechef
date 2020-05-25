#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            arr[i]=0;
        }
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            arr[x]=1;
        }
        
        vector<int>c;
         for(int i=1;i<=n;i++)
        {
          if(arr[i]==0)
          {
              c.push_back(i);
          }
        }
        for(int i=0;i<c.size();i+=2)
        {
         cout<<c[i]<<" ";   
        }
        cout<<endl;
        for(int i=1;i<c.size();i+=2)
        {
         cout<<c[i]<<" ";
         
        }
    }
    return 0;
        
} 
