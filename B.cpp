#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, cols, n;
    cin >> n;
    rows = n;
    cols = n;

    int arr[rows][cols];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }
    int index = 0;
    int sum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] < 0 and arr[i][j] % 2 == 0){
                sum += arr[i][j];
                index++;
            }
        }
    }
    cout << index << " " << sum;
    return 0;
}