class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int>seen;
        for(int i = 0; i < nums.size(); i++){
            int key = target - nums[i];
            if(seen.count(key)){
                int index = seen.at(key);
                return {index, i};
            }
            seen[nums[i]] = i;
        }

    }
};
