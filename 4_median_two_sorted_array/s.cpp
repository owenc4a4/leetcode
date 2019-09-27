class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size();
        int n = nums2.size();
        int len = m + n;

        int i = 0;
        int j = 0;

        while (i < m && j < n)
        {
            int now = 0;
            int nowIndex = i + j;
            if (nums1[i] < nums2[j])
            {
                now = nums1[i];
                i++;
            }
            else
            {
                now = nums2[j];
                j++;
            }

            if (len % 2 == 0)
            {
                if (nowIndex + 1 == len / 2)
                {
                    double res = now;
                    int next = 0;
                    if (i == m)
                    {
                        next = nums2[j];
                    }
                    else if (j == n)
                    {
                        next = nums1[i];
                    }
                    else if (nums1[i] < nums2[j])
                    {
                        next = nums1[i];
                    }
                    else
                    {
                        next = nums2[j];
                    }
                    res = (res + next) * 0.5;
                    return res;
                }
            }
            else
            {
                int index = len / 2;
                if (nowIndex == index)
                {
                    return now;
                }
            }
        }

        if (m == i)
        {
            int index = len / 2 - m;
            if (len % 2 == 0)
            {
                return (nums2[index - 1] + nums2[index]) * 0.5;
            }
            else
            {
                return nums2[index];
            }
        }

        if (n == j)
        {
            int index = len / 2 - n;
            if (len % 2 == 0)
            {
                return (nums1[index - 1] + nums1[index]) * 0.5;
            }
            else
            {
                return nums1[index];
            }
        }
        return 0;
    }
};