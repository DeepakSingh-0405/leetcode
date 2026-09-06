class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int st=0,end=matrix.size()-1;
        int n = matrix[0].size();
        int row=0;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(matrix[mid][0]>target) end= mid-1;
            else if(matrix[mid][n-1]<target) st = mid+1;
            else{
                row = mid;
                break;
            }
        }
        int low = 0,high=n-1;
        while(low<=high){
            int newmid = low + (high-low)/2;
            if(matrix[row][newmid]>target) high = newmid-1;
            else if(matrix[row][newmid]<target) low = newmid+1;
            else if(matrix[row][newmid]==target) return true;
        }
        return false;
    }
};