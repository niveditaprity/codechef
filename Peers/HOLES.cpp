#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A'||s[i]=='D'||s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='O')
        {
            count++;
        }
        else if(s[i]=='B')
        {
            count+=2;
        }
    }
    cout<<count<<endl;
    }// your code goes here
	return 0;
}
