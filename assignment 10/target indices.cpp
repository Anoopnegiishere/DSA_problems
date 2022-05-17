class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> A;
        int n =nums.size()-1;
        sort(nums.begin(), nums.end());
        for(int i=0;i<=n;i++)
        {
            if(nums[i]==target)
            {
                A.push_back(i);
            }
        }
        return A;
    }
};
