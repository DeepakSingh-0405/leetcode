class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int count=0;
        for(auto x:s){
            if(x=='(') st.push(x);
            else if(x==')'){
                if(!st.empty() && st.top()=='(')st.pop();
                else count++;
            }
        }
        count += st.size();
        return count;
    }
};