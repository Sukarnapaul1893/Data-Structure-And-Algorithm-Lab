#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            cout<<"Element is present at position " <<i+1<<endl;
    return -1;
}

int main(void)
{
    int n;
    cout<<"Enter the array size:\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value to search:\n";
    int x;
    cin>>x;
    int result = search(arr, n, x);
    if(result==-1){
        cout<<"Element is not present in array";
    }
    return 0;
}
