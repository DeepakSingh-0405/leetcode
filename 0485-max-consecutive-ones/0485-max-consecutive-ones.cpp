class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int mx=0;
        for(auto x:nums){
            if(x==1)count++;
            else{
                mx = max(mx,count);
                count=0;
            }
        }
        return max(mx,count);
    }
};