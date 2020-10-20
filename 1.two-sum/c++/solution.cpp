class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;        
        unordered_map<int, int> list;
        
        for (int i = 0; i < nums.size(); i++) {
            if (list.find(target - nums[i]) != list.end()) {
                ret.push_back(list[target - nums[i]]);
                ret.push_back(i);
            } else {
                list[nums[i]] = i;
            }
        }
        return ret;
    }
};
