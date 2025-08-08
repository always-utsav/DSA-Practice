class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        long long rem;
        long long newnum=0;
        if(x<0)
            return false;
        else{
            while(x>0){
                rem=x%10;
                newnum=(newnum*10) + rem;
                x /= 10;
            }
             if(newnum == num)
             return true;
             else
             return false;             
        }
    }
};
