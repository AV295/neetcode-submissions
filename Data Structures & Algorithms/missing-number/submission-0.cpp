class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> num;
        for(int i : nums){
            num[i]++;
        }
        for(int i=0;i<=nums.size();i++){
            if(num[i] == 0) return i;
        }
    }
};
