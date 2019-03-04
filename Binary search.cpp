#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the array size:\n";
    cin>>n;

    int arr[n];
    cout<<"Enter the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value to search:\n";
    int x;
    cin>>x;
    sort(arr,arr+n);
    int hi=n-1,lo=0,mid;

    while(lo<=hi){
        mid=(hi+lo)/2;

        if(arr[mid]==x){
            cout<<x<<" is found";
            return 0;
        }
        if(x>arr[mid]){
            lo=mid+1;
        }
        else if(x<arr[mid]){
            hi=mid;
        }
    }
    cout<<x<<" is not found";
}
