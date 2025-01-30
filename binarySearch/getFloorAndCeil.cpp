
int getCeil(vector<int> &a, int n, int x){
	int low=0;
	int high=n-1;
	int ans=-1;
     while(low<=high){
		 int mid = (low+high)/2;
		 if(a[mid]>=x){
			 ans=a[mid];
			 high=mid-1;
		 }
		 else{
			 low=mid+1;
		 }
	 }
	 return ans;
}
int getFloor(vector<int> &a, int n, int x){
	int low=0;
	int high =n-1;
	int ans =-1;
    while(low<=high){
		int mid =(low+high)/2;
		if(a[mid]<=x){
			ans=a[mid];
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.

	int ceil = getCeil(a,n,x);
	int floor =getFloor(a,n,x);
	return{floor,ceil};
}
