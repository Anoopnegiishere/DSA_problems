class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> A;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            A.push_back(sum);
        }
        return A;
    }
};
