class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string,vector<string>>grp;
        for(int i=0;i<strs.size();i++){
            string sign = strs[i];
            sort(sign.begin(),sign.end());
            grp[sign].push_back(strs[i]);
        }
        for(auto c : grp){
            res.push_back(c.second);
        }
        return res;
    }
};