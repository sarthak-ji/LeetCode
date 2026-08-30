class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;

        for (int i = 0; i < n1; i++) {
            mp1[nums1[i]]++;
        }
        for (int i = 0; i < n2; i++) {
            mp2[nums2[i]]++;
        }

        vector<int> res;
        for (auto& it : mp1) {
            int num = it.first;

            if (mp2.find(num) != mp2.end()) {
                res.push_back(num);
            }
        }
        return res;
    }
};