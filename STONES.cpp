#include <bits/stdc++.h>
using namespace std;
#define MAX 200

int main() {
int t;
cin>>t;
while(t--)
{
    string j,s;
    cin>>j>>s;
    int h[MAX]={0};
    int n=j.length();
    int k=s.length();
    int count=0;
    for(int i=0;i<n;i++)
    {
        h[j[i]]=j[i];
    }
    for(int i=0;i<k;i++)
    {
        if(s[i]==h[s[i]])
        {
            count++;
        }
    }
    cout<<count<<endl;
   
   }// your code goes here
	return 0;
}
