class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int max = INT_MIN, end = 0;
  
    for (int i = 0; i < a.size(); i++)
    {
        end = end + a[i];
        if (max<end)
            max=end;
  
        if (end< 0)
            end= 0;
    }
    return max;
}
};
