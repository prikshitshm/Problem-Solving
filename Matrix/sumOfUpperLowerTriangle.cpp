class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        vector<int>ans;
        int low_sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                low_sum+=matrix[i][j];
            }
        }
        int upp_sum=0;
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=i;j--){
                upp_sum+=matrix[i][j];
            }
        }
         ans.push_back(upp_sum);
        ans.push_back(low_sum);
       
        return ans;
        
    }
};
