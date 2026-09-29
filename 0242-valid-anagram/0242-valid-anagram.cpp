class Solution {
public:
    bool isAnagram(string &s, string &t) {
        unordered_map<char,int>freq;
        if(s.size()!=t.size())return false;
        for(auto i:s) freq[i]++;
        for(auto i:t){
            freq[i]--;
            if(freq[i]<0)return false;
        }
        return true;
    }
};