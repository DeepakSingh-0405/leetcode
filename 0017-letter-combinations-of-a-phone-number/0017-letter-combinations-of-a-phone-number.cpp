class Solution {
public:
    unordered_map<char,string>mp = {
        {'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"}
    };
    vector<string>res;
    void generate(string digits,string curr,int index){
        if(index>digits.size()-1){
            res.push_back(curr);
            return;
        }
        for(auto x: mp[digits[index]]){
            curr += x;
            generate(digits,curr,index+1);
            curr.pop_back();
            // generate(digits,curr,index+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        string curr="";
        generate(digits,curr,0);
        return res;
    }
};