class Solution {
public:
    bool isPalindrome(int x) {
        long long n=x;
        if(n<0){
            return false;
        }
        
    long long num=0;
        while(n>0){
          int a=n%10;
          num=num*10+a;  
          n=n/10;
        }
        if(num==x){
            return true;
        }
        return false;
        
    }
};