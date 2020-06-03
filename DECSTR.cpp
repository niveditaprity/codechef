#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int x=1;
    vector<char>v;
    char c='a';
    while(x!=n+(n-1)/25+2)
    {
        x++;
        v.push_back(c);
     if(c=='z')
     {
         c='a';
     }
     else
     {
     c++;
     }
     
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i];
    }
    cout<<endl;
    }// your code goes here
	return 0;
}
