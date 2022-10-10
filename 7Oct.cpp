#include<bits/stdc++.h>
using namespace std;
void rev_array(int in, int arr[], int n)
{
	if(in>=n/2)
		return;
	swap(arr[in],arr[n-in-1]);
	rev_array(in+1,arr,n);
}
int main()
{	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	rev_array(0,arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
