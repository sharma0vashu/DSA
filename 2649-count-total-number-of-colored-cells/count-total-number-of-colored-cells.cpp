class Solution {
public:
    long long coloredCells(int n) {
         long long sum=1;
        if(n==1) return sum;
       int j=1;
        for(int i=2;i<=n;i++){
        sum+=4*j;
        j++;
        }
        return sum;
    }
};