https://leetcode.com/problems/string-to-integer-atoi/description/

class Solution {
public:
    int myAtoi(string s) {
        bool positive = true;
        int index = 0;
        int size = s.size();
        long long ans = 0;
        while (index < size){
            if (s[index] == ' '){
                index++;
            } 
            else if(s[index] == '-'){
                index++;
                positive = false;
                break;
            }
            else if(s[index] == '+'){
                index++;
                break;
            }
            else{
                break;
            }
        }
        while (index <= size){
            if(s[index] < '0' || s[index] > '9' || index == size){
                if ( ! positive){
                    return int(ans*-1);
                }
                return int(ans);
            }
            else{
                // ASCII of '0' is 48
                ans = ans*10 + (s[index]%48);
                index++;
                // overflow
                if (ans > INT_MAX){
                    if(positive) return INT_MAX;
                    return INT_MIN;
                }
            }
        }
        return 0;
    }
};