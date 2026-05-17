class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                s1+= tolower((s[i]));
            }else{
                continue;
            }
        }
        string rev = s1;
        reverse(s1.begin(), s1.end());
        if(s1 == rev){
            return true;
        }else{
            return false;
        }
    }
};
