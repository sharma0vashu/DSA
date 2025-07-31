class Solution {
public:
    int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int count=1;
    int maxcount=1;
    int maj=nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i-1]==nums[i]) count++;
        else {
            count=1;
        }
    
    if(count>maxcount){
        maxcount=count;
        maj=nums[i];
    }
    }
    return maj;
    }
};