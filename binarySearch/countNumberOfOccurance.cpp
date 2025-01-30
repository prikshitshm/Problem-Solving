
int firstOcc(vector<int>& nums, int target){
    int n =nums.size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
     int mid =(low+high)/2;
    if(nums[mid] ==  target){
        ans= mid;
        high=mid-1;
    }
    else if(nums[mid]<target){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    }
    return ans;
}

int lastOcc(vector<int>& nums, int target){
    int n=nums.size();
    int low=0;
    int high=n-1;
    int ans =-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid] == target){
            ans=mid;
            low=mid+1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

      
   



class Solution {
  public:
    int countFreq(vector<int>& nums, int target) {
    int first = firstOcc(nums,target);
       int last =lastOcc(nums,target);
       if(first==-1) return 0;
       return last - first +1;
    }
};
