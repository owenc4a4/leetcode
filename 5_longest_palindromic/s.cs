namespace s5
{
    public class Solution
    {

        public string LongestPalindrome(string s)
        {
            if (s.Length == 0)
            {
                return "";
            }
            var pr = 0;
            var pl = 0;
            var max = 1;
            for (var i = 0; i < s.Length - 1; i++)
            {
                var left = i - 1;
                var right = i + 1;

                for (var j = right; j < s.Length; j++)
                {
                    if (s[i] == s[j])
                    {
                        right = j + 1;
                    }
                    else
                    {
                        break;
                    }
                }
                while (left >= 0 && right < s.Length)
                {
                    if (s[left] == s[right])
                    {
                        left--;
                        right++;
                    }
                    else
                    {
                        break;
                    }
                }

                var r = right - left - 1;
                if (r > max)
                {
                    max = r;
                    pl = left + 1;
                    pr = right - 1;
                }
            }
            return s.Substring(pl, pr - pl + 1);
        }
    }
}