class Solution {
public:
    void sortColors(vector<int>& nums) {
    //     int c0=0,c1=0,c2=0;
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]==0) c0++;
    //         else if(nums[i]==1) c1++;
    //         else if(nums[i]==2) c2++;
    //     }
    //     for(int i=0;i<c0;i++){
    //         nums[i]=0;
    //     }
    //     for(int i=c0;i<c1+c0;i++){
    //         nums[i]=1;
    //     }
    //     for(int i=c1+c0;i<c2+c1+c0;i++){
    //         nums[i]=2;
    //     }


    int l=0,m=0,h=nums.size()-1;
    while(m<=h){
        if(nums[m]==0){
            int temp = nums[l];
            nums[l] = nums[m];
            nums[m] = temp;
            m++;l++;
        }
        else if(nums[m]==1) m++;
        else if(nums[m]==2){
            int temp = nums[m];
            nums[m] = nums[h];
            nums[h] = temp;
            h--;
        }
    }
}
};