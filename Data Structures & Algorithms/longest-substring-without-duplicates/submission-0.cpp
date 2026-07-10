class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int res = 0;
        std::unordered_set<char> characters;

        for (int r = 0; r<s.size(); r++){
            while(characters.find(s[r]) != characters.end()){
                characters.erase(s[l]);
                l++;
            }
            characters.insert(s[r]);
            res = max(res, r-l+1);
        }
        return res;
    }
};
