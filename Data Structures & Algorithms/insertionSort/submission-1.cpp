// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        vector<vector<Pair>> result;
        int n = pairs.size();

        if(n == 0) return result;
        result.push_back(pairs);

        for(int i=1;i<n;i++){
            Pair curr = pairs[i];
            int j = i-1;

            while(j>=0 && pairs[j].key > curr.key){
                pairs[j+1] = pairs[j];
                j--;
            }
            pairs[j+1] = curr;
            result.push_back(pairs);
        }
        return result;
    }
};
