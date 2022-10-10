#include<bits/stdc++.h>
using namespace std;

void sumk(int in, int sum, int arr[], vector<int> &ds, int n, int k){
    if(in==n){
        if (sum==k)
        {
        for(auto it : ds)
			cout<<it;
		cout<<endl;
        }
        return;
    }
    ds.push_back(arr[in]);
    sum=sum+arr[in];
    sumk(in+1,sum,arr,ds,n,k);
    ds.pop_back();
    sum=sum-arr[in];
    sumk(in+1,sum,arr,ds,n,k);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl;
    vector<int> ds;
    sumk(0,0,arr,ds,n,2);
}