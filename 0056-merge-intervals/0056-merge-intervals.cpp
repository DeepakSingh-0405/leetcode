class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        ans.push_back({arr[0][0],arr[0][1]});
        
        for(int i=1;i<n;i++){
            if(ans.back()[1] >= arr[i][0]){
                if(arr[i][1]>ans.back()[1])
                    ans.back() = {ans.back()[0],arr[i][1]};
                continue;
            }
            else{
                ans.push_back({arr[i][0],arr[i][1]});
            }

        }
        return ans;
    }
};