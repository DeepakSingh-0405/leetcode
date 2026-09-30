class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans;
        vector<vector<int>> bucket(n+1);
        unordered_map<int,int>freq;
        for(auto x:nums) freq[x]++;
        for(auto x:freq){
            bucket[x.second].push_back(x.first);
        }
        for(int i=n;i>=1;i--){
            if(!bucket[i].empty()){
                for(auto x:bucket[i]){
                    ans.push_back(x);
                    k--;
                    if(k==0) break;
                }
                if(k==0) break;
            }
        }
        return ans;
    }
};