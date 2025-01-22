class Solution {
public:
    int findMin(vector<int>& arr) {
        int beg = 0, end = arr.size() - 1;
        int minimum =INT_MAX;
        int mid;
        while(beg<=end){
            mid=beg+(end-beg)/2;
            if(arr[beg]<=arr[mid]){
            minimum=min(minimum,arr[beg]);
            beg=mid+1;
            }
            else{
                minimum=min(minimum,arr[mid]);
                end=mid-1;
            }
        }
        
        return minimum;
    }
};