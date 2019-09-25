#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int l = 0, r = height.size() - 1;

        while (l < r)
        {
            res = max(res, (r - l) * min(height[l], height[r]));
            if (height[l] < height[r])
            {
                l++;
            }
            else
            {
                r--;
            }

        }
        return res;
    }

    int s2(vector<int>& height) {
        int res = 0;
        for (int i = 0; i < height.size() - 1; i++)
        {
            for (int j = i + 1; j < height.size(); j++)
            {
                res = max(res, (j - i) * min(height[i], height[j]));
            }
        }

        return res;
    }
};