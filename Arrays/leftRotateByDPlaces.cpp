#include <vector>
using namespace std;

// Helper function to reverse elements in a vector
void Reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array
vector<int> rotateArray(vector<int> arr, int d) {
    int n = arr.size();
    d = d % n; // To handle cases where d > n

    // Reverse parts of the array
    Reverse(arr, 0, d - 1);
    Reverse(arr, d, n - 1);
    Reverse(arr, 0, n - 1);

    return arr;
}
