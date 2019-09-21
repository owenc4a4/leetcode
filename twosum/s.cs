using System.Collections;
using System.Collections.Generic;

namespace s1
{
    public class Solution
    {
        public int[] TwoSum(int[] nums, int target)
        {
            Dictionary<int, int> map = new Dictionary<int, int>();
            for (var i = 0; i < nums.Length; i++)
            {
                map[nums[i]] = i;
            }
            for (var i = 0; i < nums.Length; i++)
            {
                var r = target - nums[i];
                if (map.ContainsKey(r) && map[r] != i)
                {
                    return new int[] { i, map[r] };
                }
            }
            return null;

        }

        public int[] s2(int[] nums, int target)
        {
            var x = 0;
            var y = 0;
            for (; x < nums.Length; x++)
            {
                for (y = x + 1; y < nums.Length; y++)
                {
                    if (nums[x] + nums[y] == target)
                    {
                        return new int[] { x, y };
                    }
                }
            }
            return null;
        }
    }
}