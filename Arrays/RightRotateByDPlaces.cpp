class Solution {
public:
    // Helper function to reverse part of the array
    void Reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }

    // Function to rotate the array to the right
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handle cases where k > n

        // Reverse the last k elements
        Reverse(nums, n - k, n - 1);
        // Reverse the first n - k elements
        Reverse(nums, 0, n - k - 1);
        // Reverse the entire array
        Reverse(nums, 0, n - 1);
    }
};
