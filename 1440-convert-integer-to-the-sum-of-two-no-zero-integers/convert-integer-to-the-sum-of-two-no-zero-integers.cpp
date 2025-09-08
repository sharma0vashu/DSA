class Solution {
public:
    bool isnozero(int x){
    while(x>0){
        if(x%10==0){
            return true;
        }
        x=x/10;
    }
    return false;
   }

    vector<int> getNoZeroIntegers(int n) {
      vector<int> p;
     int a,b;
     for(int a=1;a<n;a++){
        b = n - a;
        if(!isnozero(a) && !isnozero(b)){
            p.push_back(a);
            p.push_back(b);
             break; 
        }
        }
        return p;
     }
};