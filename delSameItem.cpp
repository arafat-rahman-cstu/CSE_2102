#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int item;cin>>item;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=item){
            arr[size]=arr[i];
            size++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}