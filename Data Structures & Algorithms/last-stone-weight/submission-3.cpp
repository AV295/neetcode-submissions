class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 0) return 0;

        while(stones.size()>1){
            sort(stones.begin(), stones.end());
            int n = stones.size();
            if(stones[n-1] == stones[n-2]){
                stones.pop_back();
                stones.pop_back();
            }else if(stones[n-1] > stones[n-2]){
                int temp = stones[n-1] - stones[n-2];
                stones.pop_back();
                stones.pop_back();
                stones.push_back(temp);
            }else{
                int temp = stones[n-2] - stones[n-1];
                stones.pop_back();
                stones.pop_back();
                stones.push_back(temp);
            }
            if(stones.size() == 0) return 0;
        }
        return stones[0];
    }
};
