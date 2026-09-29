class Solution {
public:
    bool isfreqsame(int freq[],int win[]){
        for(int i=0;i<26;i++){
            if(freq[i]!=win[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(auto x:s1){
            freq[x-'a']++;
        }
        for(int i=0;i<= s2.length();i++){
        int windowfreq[26]={0};
        int window=0,idx=i;
            while(window<s1.length() && idx<s2.length()){
                windowfreq[s2[idx]-'a']++;
                window++;idx++;
            }
            if(isfreqsame(freq,windowfreq)) return true;
        }
        return false;
    }
};