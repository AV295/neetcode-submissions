class Solution {
public:
    bool isValid(string s) {
        stack<char> vp;
        for(auto st : s){
            if(st == '[' || st == '{' || st == '('){
                vp.push(st);
            }else{
                if(vp.empty()) return false;

                if(vp.top() == '(' && st != ')' || vp.top() == '{' && st != '}' || vp.top() == '[' && st != ']')
                    return false;
                vp.pop();
            }
        }
        return vp.empty();
    }
};
