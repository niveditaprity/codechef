#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
scanf("%d",&t);
while(t--)
{
    int n;
    scanf("%d",&n);
    int  arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++)
    {
        arr[0]=__gcd(arr[0],arr[i]);
        if(arr[0]==1)
        {
            break;
        }
    }
    if(arr[0]==1)
    {
    printf("%d\n",n);
    }
    else
    {
        printf("-1\n");
    }
    }// your code goes here
	return 0;
}
