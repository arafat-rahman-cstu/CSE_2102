#include<iostream>
using namespace std;
int main(){
    int m,n,l;
    cin>>m>>n>>l;
    int arr1[m][n];
    int arr2[n][l];
    int mat[m][l];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            mat[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            for(int k=0;k<n;k++){
                mat[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}