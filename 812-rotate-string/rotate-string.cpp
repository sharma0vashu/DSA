class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1=s.length();
        int n2=goal.length();
        if(s==goal) return true;
        if(n1!=n2) return false;
        queue<char> q1,q2;
        for(int i=0;i<n1;i++){
           q1.push(s[i]);
        }
         for(int i=0;i<n2;i++){
           q2.push(goal[i]);
        }
        int k=n2-1;

        while(k!=0){
            char ch=q2.front();
            q2.pop();
            q2.push(ch);
            if(q1==q2) return true;

            k--;
        }
        return false;
    }
};