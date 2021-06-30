// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int max_reach=0;
        int jumps=0;
        int previous=0;
        for(int i=0;i<n;i++){
            if(max_reach<i)
            return -1;
            if(previous<i){
                jumps++;
                previous=max_reach;
            }
            max_reach=max(max_reach,i+arr[i]);
        }
            return jumps;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends