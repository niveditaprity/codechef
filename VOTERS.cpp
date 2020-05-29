#include <bits/stdc++.h>
using namespace std;
int main() {
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int n=n1+n2+n3;
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{
	    int x;
	    cin>>x;
	    mp[x]++;
	}
	vector<int>v;
	for(auto it=mp.begin();it!=mp.end();it++)
	{
	   if(it->second>=2)
	   {
	       v.push_back(it->first);
	   }
	}
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
	    cout<<v[i]<<endl;
	}
	return 0;
}
