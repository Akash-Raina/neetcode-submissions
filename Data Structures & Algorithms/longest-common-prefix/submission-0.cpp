class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string output = "";

        int smallestStringIndex(201);
        int smallestStringSize(201);

        for(int i = 0 ; i < strs.size(); i++){
            if(strs[i].size() < smallestStringSize) smallestStringIndex = i;
            smallestStringSize = strs[smallestStringIndex].size();

        }

        int i(0), j(0);

        while(j < smallestStringSize){
            while(i < strs.size()){
                if(i == smallestStringIndex){
                    i++;
                    continue;
                }
                if(strs[i][j] != strs[smallestStringIndex][j]){
                    return output;
                }
                i++;
            }
            output += strs[smallestStringIndex][j];
            i=0;
            j++;
        }

        return output;

    }
};