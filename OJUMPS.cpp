#include <iostream>
using namespace std;
long long n;
int main() {
    cin>>n;
    n=n%6;
    if(!n||n==1||n==3)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
	// your code goes here
	return 0;
}
