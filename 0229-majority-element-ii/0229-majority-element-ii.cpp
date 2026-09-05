class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        vector<int>res;
        for(auto i : m){
            if(i.second>n/3){
                res.push_back(i.first);
            }
        }
        return res;
    }
};