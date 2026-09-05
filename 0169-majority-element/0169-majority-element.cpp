class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int max = nums.size()/2;
        int max_key = -1;
        for(const auto& it:m){
            if(it.second > max){
                return it.first;
            }
        }
        return max_key;
    }
};