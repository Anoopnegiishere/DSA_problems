class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int cnt = 0;
        
        int l = 0, r = n - 1;
        while(l < r)
        {
            if(nums[l] + nums[r] == k)
            {
                cnt++;
                l++;
                r--;
            }
            else if(nums[l] + nums[r] < k)
                l++;
            else
                r--;
        }
        return cnt;
    }
};
