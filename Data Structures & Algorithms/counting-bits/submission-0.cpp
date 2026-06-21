class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i=0;i<=n;i++){
            int count = 0;
            int n = i;
            while(n){
                n = n & (n-1);
                count++;
            }
            result.push_back(count);
        }
        return result;
    }
};
