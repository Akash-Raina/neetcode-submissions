class Solution {
public:

    bool isAlphanumeric(int c){
        if(c >= 48 && c <= 57 || c >= 65 && c <= 90 || c >= 97 && c <= 122){
            return true; 
        } 
        return false;
    }

    bool isPalindrome(string s) {
      int i(0), j(s.size() - 1);

      while(i < j){

        bool isIAlphanumeric = isAlphanumeric(s[i]);
        bool isJAlphanumeric = isAlphanumeric(s[j]);

        if(isIAlphanumeric){
            if(isJAlphanumeric){

                if(tolower(s[i])== tolower(s[j])){
                    i++;
                    j--;
                }
                else return false; 
            }
            else j--;
        }
        else i++;
      }

      return true;
    }
};
