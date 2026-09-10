class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        int square;
        for (int i = 0; i < nums.size(); i++) {
            square = nums[i] * nums[i];
            res.push_back(square);
        }
        sort(res.begin(), res.end());
        return res;
    }
};