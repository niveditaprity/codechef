#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
  int n,k;
  cin>>n>>k;
  int arr[n];
  int s=0;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      s=s+arr[i];
  }
  sort(arr,arr+n);
  int maxsum=0;
  int sum=0;
  for(int i=0;i<k;i++)
  {
       sum=sum+arr[i];  
      }
      
      for(int i=0;i<k;i++)
      {
          maxsum=maxsum+arr[n-1-i];
      }
      int final= max(abs(sum-(s-sum)), abs(maxsum- (s-maxsum)));
  cout<<final<<endl;
  }// your code goes here
	return 0;
}
