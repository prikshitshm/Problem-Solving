class Solution {
  public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
        // code here
        int sum = 0;
        // Iterate over the rows
        for(int i = 0; i < N; i++) {
            // Iterate over the columns
            for(int j = 0; j < M; j++) {
                sum += Grid[i][j]; // Add the current element to the sum
            }
        }
        return sum;
    }
};
