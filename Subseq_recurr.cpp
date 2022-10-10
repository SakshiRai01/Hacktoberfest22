#include<bits/stdc++.h>
using namespace std;

void subs(int ind, vector<int> &ds, int arr[], int n)
{
	if(ind==n){
		for(auto it : ds)
			cout<<it;
		if(ds.size()==0)
			cout<<"{}";
		cout<<endl;
		return;
	}
	ds.push_back(arr[ind]);
	subs(ind+1,ds,arr,n);
	ds.pop_back();
	subs(ind+1,ds,arr,n);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	vector<int> ds;
	subs(0,ds,arr,n);
}
