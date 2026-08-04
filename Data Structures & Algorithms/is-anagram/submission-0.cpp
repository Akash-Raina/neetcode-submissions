class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        int arr[26] = {0};

        for(int i : s){
            arr[i-97]++;
        }
        for(int i : t){
            arr[i-97]--;
        }
        for(auto i: arr){
            if(i != 0) return false;
        }
        return true;


    }
};
