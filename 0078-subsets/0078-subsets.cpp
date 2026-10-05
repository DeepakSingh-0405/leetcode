class Solution {
public:
    vector<vector<int>>res;
    void backtrack(vector<int>&nums,vector<int>&curr,int index){
        if(index == nums.size()){
        res.push_back(curr);
        return;
        }

        curr.push_back(nums[index]);
        backtrack(nums,curr,index+1);
        curr.pop_back();
        backtrack(nums,curr,index+1);
        }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>curr;
        backtrack(nums,curr,0);
        return res;
    }
};