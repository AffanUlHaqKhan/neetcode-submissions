class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> seen;
        for(int i =0; i<nums.size(); i++){
            int need = target - nums[i];
            if(seen.count(need)){
                return {seen[need],i};
            }else{
                seen[nums[i]] = i;
            }
        }
        return{};
    }
};
