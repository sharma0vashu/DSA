class Solution {
public:
    int compress(vector<char>& chars) {
        
        
        int i=0;
        int index=0;
        int n=chars.size();
        
       while(i<n){
         char cur=chars[i];
         int count=0;
         //find the count of dublicates
         while(i<n && chars[i]==cur){
            count++;
            i++;
         }
         //no  the assign work
         chars[index]=cur;
         index++;
         if(count>1){
            string cou=to_string(count);
            for(char & ch: cou){
                chars[index]=ch;
                index++;
            }

         }

       }

        return index;
    }
};