class Solution {
public:
    bool isPalindrome(int x) {
        int b;
        int c=x;
        double rev=0;
        if(x<0){
            return false;
        }
        while(x>0){
            b=x%10;
            rev = (rev*10)+b;
            x=x/10;
        }
        if(c==rev){
            return true;
        }
        else {
            return false;
        }
    }
};