class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int full(m), i(0);
        while(full < m + n){
            nums1[full] = nums2[i];
            i++;
            full++;
        }
        sort(nums1.begin(), nums1.end());
    }
};