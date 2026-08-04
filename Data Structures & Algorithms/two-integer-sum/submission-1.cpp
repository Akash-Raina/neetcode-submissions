class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        if(nums.size() == 2) return {0, 1};

        unordered_map<int, int>seen;
        for(int i = 0; i < nums.size(); i++){
            int key = target - nums[i];
            if(seen.count(key)){
                int index = seen.at(key);
                if(i > index) return {index, i};
                return {i, index};
            }
            seen[nums[i]] = i;
        }

    }
};
