#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    int arr1[m],arr2[n];
    for(int i=0;i<m;i++){
        cin >> arr1[i];
    }
    for(int i=0;i<n;i++){
        cin >> arr2[i];
    }
    map<int,int> mp;
    vector<int> res;
    for(int i=0;i<m;i++){
        mp[arr1[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[arr2[i]]){
            res.push_back(arr2[i]);
        }
    }
    for(int i=0;i<res.size();i++){
        cout << res[i] << " ";
    }
}