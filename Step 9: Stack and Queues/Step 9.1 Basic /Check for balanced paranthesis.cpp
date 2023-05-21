//https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack <char> stack;
        
        for(auto x:s){
            if(x == '(' || x=='{' || x == '['){
                stack.push(x);
            }
            else{
                if(stack.empty()){
                    return false;
                }
                if(x=='}' && stack.top() == '{'){
                    stack.pop();
                }
                else if(x==')' && stack.top() == '('){
                    stack.pop();
                }
                else if(x==']' && stack.top() == '['){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(stack.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};