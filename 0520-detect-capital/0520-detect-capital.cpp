class Solution {
public:
    bool detectCapitalUse(string word) {
        int ccount=0;
        for(auto x:word){
            cout<<x;
            if(isupper(x)) ccount++;
        }
    cout<<ccount;
        if(ccount==word.length() || ccount==0 || (ccount==1 && isupper(word[0]))) return true;
        return false;
    }
};