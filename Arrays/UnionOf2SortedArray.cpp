class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
    int n1=a.size();
    int n2=b.size();
    
    vector<int>unionarr;
    
    int i=0;
    int j=0;
    
    while(i<n1&& j<n2){
        if(a[i]<=b[j]){
            if(unionarr.size()==0 ||  unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionarr.size()==0 ||  unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
        }
        }
        
        while(i<n1){
            if(unionarr.size()==0 ||  unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }
        
         
        while(j<n2){
            if(unionarr.size()==0 ||  unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
        }
        
        
    
    
    return unionarr;
    }
};
