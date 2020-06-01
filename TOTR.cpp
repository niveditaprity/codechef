#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	char s[27],g[101];
	cin>>t>>s;
	while(t--)
	{
	    cin>>g;
	    for(int i=0;g[i];i++)
	    {
	        if(islower(g[i]))
	        {
	           g[i]= s[g[i]-'a'];
	        }
	        else if(isupper(g[i]))
	        {
	           g[i]= toupper(s[g[i]-'A']);
	        }
	        else if(g[i]=='_')
	        {
	            g[i]=' ';
	        }
	    }
	    cout<<g<<"\n";
	    
	}// your code goes here
	return 0;
}
