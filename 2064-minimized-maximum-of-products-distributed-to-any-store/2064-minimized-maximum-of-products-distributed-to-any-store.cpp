class Solution {
    static bool canDistribute(int x, vector<int>&q, int n){
        for(int i=0;i<q.size();i++){
            int y = ((q[i]+x-1)/x);
            if(y<=n){
                n -= y;
            }
            else return false;
        }
        return true;
    }
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int i = 1;
        int j = *max_element(quantities.begin(),quantities.end());
        int minAns=0;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(canDistribute(mid,quantities,n)){
                minAns = mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return minAns;     
    }
};