class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int last(nums.size() - 1), count(0);

        if(nums.size() == 0) return 0;
        
        if(nums.size() == 1){
            if(nums[0] == val) return 0;
            else return 1;
        }

        for(int i = 0; i < last; i++){
            //check if the pointed element is equal to val
            if(nums[i] == val){
                // if equal swap it with last non equal element
                if(nums[last] != val){
                    int temp = nums[i];
                    nums[i] = nums[last];
                    nums[last] = temp;
                    last--;
                }
                else{
                    //find the last non similar element
                    for( ; nums[last] == val && i < last ; last--){};
                    if(nums[last] != val && i < last){
                        int temp = nums[i];
                        nums[i] = nums[last];
                        nums[last] = temp;
                        last--;
                    }
                        
                }
            }
        }

        for(int i = 0; i < nums.size() && nums[i] != val ; i++){
            count++;
        }
        return count;
    }
};