void insertionSort2(int n, vector<int> A) {
     for(int i=1;i<A.size();i++){
        for(int j=i;j>0;j--){
            if(A[j]<A[j-1]){
                swap(A[j],A[j-1]);
            }
            else break;
        }
        for(int i=0;i<n;i++)
        {
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
}
