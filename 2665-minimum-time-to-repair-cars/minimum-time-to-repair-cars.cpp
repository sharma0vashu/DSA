class Solution {
public:
    bool calc(long long mid,vector<int>& ranks, int cars)
    {
        int c=0;
        for(int i=0;i<ranks.size();i++)
        {
            long long x=mid/ranks[i];
            long long p=sqrt(x);
            c+=p;
            if(c>=cars)return true;
        }
        return false;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long l=1,h=1e14,ans=0;;
        while(l<=h)
        {
            long long mid=(l+h)/2;
            bool a=calc(mid,ranks,cars);
            if(a==true)
            {
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};