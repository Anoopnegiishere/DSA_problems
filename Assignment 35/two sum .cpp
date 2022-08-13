class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
	vector<int> ans;
	for (int i = 0; i < nums.size(); i++) {
		int n = target - nums[i];

	if (hash.find(n) != hash.end()) {
			ans.push_back(hash[n] );
			ans.push_back(i);			
			return ans;
		}
		hash[nums[i]] = i;
	}
	return ans;
}
};
