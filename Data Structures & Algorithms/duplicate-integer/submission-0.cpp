class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>unique;
        for(auto i : nums){
            if(!unique.count(i)){
                unique.insert(i);
            }
            else return true;
        }
        return false;
    }
};