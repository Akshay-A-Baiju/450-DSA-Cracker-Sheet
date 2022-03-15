// problem link: https://practice.geeksforgeeks.org/problems/reverse-an-array/0

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t; cin>>t;
	while (t--)
	{
	    int n; cin>>n;
	    int ar[n];
	    for (int i=0;i<n;i++) cin>>ar[i];
	    for (int i=0;i<n/2;i++) swap(ar[i],ar[n-1-i]);
	    for (int i=0;i<n;i++) cout<<ar[i]<<" ";
	    cout<<endl;
	}
	return 0;
 }
