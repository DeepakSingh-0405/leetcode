class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1,j=1;
        int count=1;
        for(j;j<nums.size();j++){
            if(nums[j]==nums[j-1]) continue;
            else if(nums[j]!=nums[j-1]){
                nums[i]=nums[j];
                count++;
                i++;
            }
        }
        return count;
    }
};