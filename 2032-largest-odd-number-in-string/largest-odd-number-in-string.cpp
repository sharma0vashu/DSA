class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
         for(int j=n-1;j>=0;j--){
            if((num[j] - '0')%2==1){
               return num.substr(0,j+1);
                break;
            }
            
         }
        return "";
    
    }
};