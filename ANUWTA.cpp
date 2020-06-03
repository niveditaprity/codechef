#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,sum;
	    cin>>n;
	    sum=(n*(n+1))/2;
	    cout<<sum+n<<"\n";
	}// your code goes here
	return 0;
}
