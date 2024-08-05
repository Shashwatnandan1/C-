#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int> st; // Creation a stack for storing brackets...
        for(int i = 0; i < s.length(); ++i){
            char ch = s[i]; // Decoding characters from s string...
            if(ch == '(' || ch == '[' || ch == '{'){
                st.push(ch); // Opening brackets ko stack mein push krte jao...
            }else{
                if(st.empty()){
                    return false;
                }else{
                    // find in stack ki brackets complete ho rhe h ki nhi then, pop kr do...
                    if(ch == ')' && st.top() == '('){
                        st.pop();
                    }else if(ch == ']' && st.top() == '['){
                        st.pop();
                    }else if(ch == '}' && st.top() == '{'){
                        st.pop();
                    }else{
                        return false;
                    }
                }
            }
        }
        if(st.size() == 0){ // if stack m element nhi h mtlb saare brackets valid h true kr do...
            return true;
        }
        return false; // otherwise false...
    }
};