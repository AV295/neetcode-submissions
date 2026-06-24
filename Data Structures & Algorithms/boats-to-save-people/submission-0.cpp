class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size();
        int count = 0;
        if(limit < people[n-1]) return 0;
        int left = 0, right = n-1;
        while(left<=right){
            if((people[left]+people[right])>limit){
                count++;
                right--;
            }else if((people[left]+people[right]) == limit){
                count++;
                left++;
                right--;
            }else{
                count++;
                left++;
                right--;
            }
        }
        return count;
    }
};