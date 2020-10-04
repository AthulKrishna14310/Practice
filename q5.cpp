#include <iostream>
using namespace std;
int main(){
    int n;
    int d;
    int arr[100];
    int count=0;
    cin>>n;
    cin>>d;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]-arr[j]==d){
                cout<<"\n a = "<<arr[i]<<" b = "<<arr[j];
                count++;
            }
        }
    }

    cout<<count;
    return 0;
}