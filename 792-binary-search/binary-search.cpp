class Solution {
public:
    int binarysearch(vector<int>& arr, int target,int start,int end){ if(start<=end){
        int mid=(start+end)/2;
         if(arr[mid]==target) return mid;
         else{
            if(arr[mid]>target){return binarysearch(arr, target,start,mid-1);
                
            }
            else{
                return binarysearch(arr, target,mid+1,end);
            }
         }
    }
        
     else{
        return -1;
     }

    }
    int search(vector<int>& arr, int target) {
        int st=0;
        int end=arr.size()-1;
      int res=  binarysearch(arr,target,st,end);

    return res;
    }
};