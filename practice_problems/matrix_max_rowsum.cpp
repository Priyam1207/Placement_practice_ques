#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    vector<vector<int>>arr(m,vector<int>(n));
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    int max = 0;
    for (int i = 0; i < m; i++){
        int sum = 0;
        for (int j = 0; j < n; j++){
            sum += arr[i][j];
        }
        if (sum > max){
            max = sum;
        }
    }
    cout << max << endl;
    
}