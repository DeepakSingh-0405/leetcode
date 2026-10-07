class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0,j=0;
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
        while(j<nums.size()){
            if(nums[j]<0){
                if(nums[j]<0){
                    res[pos] = nums[j];
                    pos+=2;
                }
            }
            j++;
        }
        return res;
    }
};