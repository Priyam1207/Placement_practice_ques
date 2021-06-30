#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i < n;i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i=0; i < n;i++){
        if(arr[arr[i]]>=0){
            arr[arr[i]]=-1;
        }
        else{
            count++;
        }
    }
    cout << count << endl;
}