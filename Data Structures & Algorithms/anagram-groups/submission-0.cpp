class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> res;
        std::vector<std::vector<std::string>> result;
        for(const auto& s: strs){
            std::string sortedS = s;
            sort(sortedS.begin(),sortedS.end());
            res[sortedS].emplace_back(s);
        }
        for(auto& res_strings : res){
            result.emplace_back(res_strings.second);
        }
        return result;
    }
};
