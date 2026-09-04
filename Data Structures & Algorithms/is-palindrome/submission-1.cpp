class Solution {
public:

    bool isAlphanumeric(int c){
        if(c >= 48 && c <= 56 || c >= 97 && c <= 122){
            return true; 
        } 
        return false;
    }

    bool isPalindrome(string s) {

      transform(s.begin(), s.end(), s.begin(), ::tolower);
      int i(0), j(s.size() - 1);

      while(i < j){

        bool isIAlphanumeric = isAlphanumeric(s[i]);
        bool isJAlphanumeric = isAlphanumeric(s[j]);

        if(isIAlphanumeric){
            if(isJAlphanumeric){

                if(s[i]== s[j]){
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
