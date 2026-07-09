class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        std::unordered_map<char,int> countS;
        std::unordered_map<char,int> countT;

        for(int index = 0; index<s.length(); index++){
            countS[s[index]]++;
            countT[t[index]]++;
        }

        return countS==countT;
    }
};
