class Solution {
public:
    vector<vector<int>>res;
    void generate(vector<int>& candidates, int target, vector<int>&curr,int index){
        int sum=0;
        for(auto x:curr) sum += x;
        if(sum ==target){
            res.push_back(curr);
            return;
        }
        if(index==candidates.size() || sum>target) return;

        curr.push_back(candidates[index]);
        generate(candidates,target,curr,index);

        curr.pop_back();
        generate(candidates,target,curr,index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>curr;
        generate(candidates,target,curr,0);
        return res;
    }
};