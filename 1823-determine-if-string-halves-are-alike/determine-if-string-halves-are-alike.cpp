class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        int a=n/2;
         int leftcount=0;
         int rightcount=0;
         char ch;
         for(int i=0;i<n/2;i++){
            if(s[i] == 'U' ||s[i] == 'O' ||s[i] == 'I' ||s[i] == 'E' ||s[i] == 'A' ||s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
{
                leftcount++;
            }
         }
          for(int i=n/2;i<n;i++){
           if(s[i] == 'U' ||s[i] == 'O' ||s[i] == 'I' ||s[i] == 'E' ||s[i] == 'A' ||s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
{
                rightcount++;
            }
         }
         if(leftcount==rightcount){
            return true;
         }
         return false;
    }
};