class Solution {
public:
    int calculate_XORSum(vector<int>&nums,int i, int curr){
        if(nums.size()==i){
            return curr;
        }
        return calculate_XORSum(nums,i+1,curr)+calculate_XORSum(nums,i+1,curr^nums[i]);
    }
    int subsetXORSum(vector<int>& nums) {
        int sum = calculate_XORSum(nums,0,0);
        return sum;
    }
};
