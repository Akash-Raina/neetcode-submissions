class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int point(nums[0]), count(1);

        for(int i = 1; i < nums.size(); i++){
            if(point != nums[i]){
                point = nums[i];
                count = 1;
                continue;
            }
            count++;
            if(count > (nums.size())/2) return point;
        }
        return point;
    }
};