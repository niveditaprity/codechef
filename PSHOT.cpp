#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0,lefta=n,leftb=n;
        for(int i=0;i<2*n;i++)
        {
           if(s[i]=='1')
           {
               if(i%2==0)
               {
               a++;
               }
               else
               {
                   b++;
               }
           }
           if(i%2==0)
           {
               lefta--;
           }
           else
           {
               leftb--;
           }
           if(a>leftb+b){
				cout<<i+1<<endl;
				break;
			}
			if(b>lefta+a){
				cout<<i+1<<endl;
				break;
			}
			if(a==b&&leftb==0){
				cout<<i+1<<endl;
				break;
        }
    }
    }
	// your code goes here
	return 0;
}
