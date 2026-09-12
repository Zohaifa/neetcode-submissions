class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> checker;
        for(int x: nums){
            if(checker.count(x)){
               return true; 
            }
            else{
                checker[x] = 1;
            }
        }
        return false;
    }
};