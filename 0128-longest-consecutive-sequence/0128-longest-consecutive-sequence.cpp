class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        if(nums.size()==0) return 0;
        for(auto x:nums) s.insert(x);
        int count=1;
        int mx = count;
        int i=0;
        for(auto x:s){
            nums[i]=x;
            i++;
        }
        for(int i=1;i<s.size();i++){
            if(nums[i] - nums[i-1]==1){
                count++;
                mx = max(mx,count);
            }
            else {
                count=1;
            };
        }
        return mx;
    }
};