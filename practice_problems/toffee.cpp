#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>kids(n);
    for(int i=0; i < n;i++){
        cin >> kids[i];
    }
    int max = *max_element(kids.begin(), kids.end());
    int extra;
    cin >> extra;
    for(int i=0; i <n;i++){
        if(kids[i]+extra >= max)
        cout << "true ";
        else
        cout << "false ";
    }
}