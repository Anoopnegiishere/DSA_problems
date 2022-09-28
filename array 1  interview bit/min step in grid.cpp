int Solution::coverPoints(vector<int> &x, vector<int> &y) {
	int ans=0;
    int n = x.size();
	 for(int i=0;i<n-1;i++){
        if(abs(x[i]-x[i+1])<=abs(y[i]-y[i+1]))
         ans+=abs(y[i]-y[i+1]);
        else{
            ans+=abs(x[i]-x[i+1]);
        }
    }
    return ans;
}
