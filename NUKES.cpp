#include <iostream>
using namespace std;

int main() {
	int a,n,k;
	cin>>a>>n>>k;
	for(int i=0;i<k;i++)
	{
	 cout<<(a%(n+1))<<" ";
	 a=a/(n+1);
	}// your code goes here
	return 0;
}
