class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }else{
            long long int temp=x;
            long long int reverseNumber=0;
            while(temp>0){
                reverseNumber=reverseNumber*10+ temp%10;
                temp=temp/10;
            }
            if(reverseNumber==x){
                return true;
            }else{
                return 0;
            }
        }
        
    }
};