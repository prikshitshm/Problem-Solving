class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n =arr.size();
        int low=0;
        int high=n-1;
        while(low<high){
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
    }
};
