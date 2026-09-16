class Solution {
public:
    bool checkDivisibility(int n) {
        int prod=1,sum=0;
        int temp=n;
        while(n>0){
            int x = n%10;
            sum+=x;
            prod*=x;
            n=n/10;
        }
        if(temp%(sum+prod)==0) return true;
        return false;
    }
};