class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>res;
        unordered_set<int>s;
        int sum=0;
        int n = grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s.find(grid[i][j]) != s.end()){
                    res.push_back(grid[i][j]);
                    sum -= grid[i][j];
                }
                s.insert(grid[i][j]);
                sum += grid[i][j];
            }
        }
        int actSum = ((n*n)*((n*n) +1))/2;
        res.push_back(actSum - sum);
        return res;

    }
};