class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> numbers_seen;
        for(int num : nums){
            if(numbers_seen.count(num)){
                return true;
            }else{
                numbers_seen.insert(num);
            }
        }
        return false;
    }
};