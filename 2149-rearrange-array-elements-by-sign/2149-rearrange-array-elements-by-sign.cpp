class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0;
        vector<int>res(nums.size());
        int pos=0;
        while(i<nums.size()){
            if(nums[i]>0){
                res[pos] = nums[i];
                pos += 2;
            }
            i++;
        }
        pos=1;
        i=0;
        while(i<nums.size()){
            if(nums[i]<0){
                if(nums[i]<0){
                    res[pos] = nums[i];
                    pos+=2;
                }
            }
            i++;
        }
        return res;
    }
};