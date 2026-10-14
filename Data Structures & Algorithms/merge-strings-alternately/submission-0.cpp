class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3;
        int j(0), k(0), n;
        if(word1.length() > word2.length()) n = word1.length();
        else n = word2.length();

        for(int i = 0; i < n; i++){
            if(j < word1.length()){
                word3.push_back(word1[j]);
                j++;
            }
            else{
                word3.append(word2, k , n - k);
                return word3;
            }
            if(k < word2.length()){
                word3.push_back(word2[k]);
                k++;
            }
            else{
                word3.append(word1, j, n - j);
                return word3;
            }
        }
        return word3;
    }
};