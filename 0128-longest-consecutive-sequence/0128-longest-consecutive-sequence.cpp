class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        int mx = 0;
        for(auto x:s) {
            int count=1;
            int curr = x;
            if(s.find(x-1)==s.end()){
                while(s.find(curr+1)!=s.end()){
                    count++;
                    curr++;
                }
            mx = max(mx,count);
            }
        }
        
        return mx;
    }
};