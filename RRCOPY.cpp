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
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++)
	    {
	        mp[arr[i]]++;
	    }
	    cout<<mp.size()<<endl;
	}// your code goes here
	return 0;
}
