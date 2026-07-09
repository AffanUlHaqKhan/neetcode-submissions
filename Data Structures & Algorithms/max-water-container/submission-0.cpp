class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxA = 0;
        int l = 0;
        int r = heights.size()-1;

        while( l < r){
            int area = (r - l) * (std::min(heights[r],heights[l]));
            maxA = std::max(maxA, area);
            if(heights[l] <= heights[r]){
                l++;
            } else{
                r--;
            }
        }
        return maxA;
    }
};
