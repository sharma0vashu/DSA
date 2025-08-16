class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n==1) return x;
        
         long long exp = n;  
        if (exp < 0) {
            x = 1 / x;
            exp = -exp;
        }
        double ans = myPow(x,exp/2);
        if(n%2==0){
            return ans*ans;
        }
        else{
            return x*ans*ans;
        }
    }
};