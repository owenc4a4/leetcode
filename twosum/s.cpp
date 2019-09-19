#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> m;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            int a = target - nums[i];
            if (m.find(a) != m.end()) {
                return {m[a], i};
            }
            else
                m[nums[i]] = i;
        }
        return {};
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     for (int j = i + 1; j < nums.size(); j++)
        //     {
        //         if (nums[i] + nums[j] == target)
        //         {
        //             return {i, j};
        //         }
        //     }
        // }
        // return {};
    }
};