class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int product = 1, pw0 = 1;
        int c0=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)    
                product *= nums[i];
            else if(nums[i] == 0){
                pw0 = 0;
                c0++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(pw0 == 1 && nums[i]!=0){    
                result.push_back(product/nums[i]);
            }else if(pw0 == 0 && nums[i]!=0){
                result.push_back(0);
            }else if(c0 <= 1 && nums[i] == 0){
                result.push_back(product);
                cout << product;
            }else if(c0>1 && nums[i] == 0){
                result.push_back(0);
            }
        }
        return result;
    }
};
