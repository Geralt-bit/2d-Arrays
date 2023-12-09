#include <bits/stdc++.h>
using namespace std;
int main(){
    int rows,seats,n,m;
    cin>>n>>m;
    rows=n; seats=m;
    int arr[rows][seats], arr1[rows][seats];
    for(int i=0; i<rows; i++)
            for(int j=0; j<seats; j++)
            cin>>arr[i][j];
   
    for(int i=0; i<rows; i++)
            for(int j=0; j<seats; j++)
            cin>>arr1[i][j];
            
    int sum=0;
    for(int i=0; i<rows; i++)
        for(int j=0; j<seats; j++)
        if(arr1[i][j]==1)
        sum=sum+arr[i][j];
        cout << sum;
        return 0;
    }