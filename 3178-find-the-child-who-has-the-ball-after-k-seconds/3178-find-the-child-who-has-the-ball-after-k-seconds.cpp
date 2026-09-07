class Solution {
public:
    int numberOfChild(int n, int k) {
        int cycle = 2 * (n - 1);
        k %= cycle;

        if (k < n)
            return k;

        return cycle - k;
    }
};