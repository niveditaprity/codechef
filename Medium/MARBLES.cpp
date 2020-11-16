#include <bits/stdc++.h>
using namespace std;
  
long long nCr(int a, int b) 
{ 
   int n = a-1;
  int r = b-1,i=0;
  long long result=1;
  if (r > n/2) {
    r = n - r;
  }
  for (i = 0; i <r; i++) {
    result *= (n-i);
    result /= (i+1);
  }
  return result;
} 
  

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int k,n;
	    cin>>k>>n;
	    cout<<nCr(k,n)<<endl;
	}// your code goes here
	return 0;
}
