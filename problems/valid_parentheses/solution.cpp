class Solution {
public:
    bool isValid(string s) {
        int stringSize=s.size();
        if(stringSize%2!=0){
            return false;
        }
        if(stringSize==0){
            return true;
        }
        map<char, char> m = { {']','['},{')','('},{'}','{'} };
        stack<char> myStack;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='{' or s[i]=='[' or s[i]=='(' ){
                myStack.push(s[i]);
            }
            else if(s[i]=='}' or s[i]==']' or s[i]==')' ){
                if(myStack.empty() or myStack.top()!=m[s[i]]){
                    return false;
                }else{
                    myStack.pop();
                }
            }
        }
        if(myStack.empty()){
            return true;
        }
        return false;
    }
};