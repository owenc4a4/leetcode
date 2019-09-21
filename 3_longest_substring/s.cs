namespace s3
{
    public class Solution
    {
        public int LengthOfLongestSubstring(string s)
        {
            var a = 0;
            var b = a + 1;
            var max = 1;

            if (s.Length == 0)
            {
                return 0;
            }

            while (true)
            {
                if (b == s.Length || a == s.Length - 1)
                {
                    var r = b - a;
                    max = r > max ? r : max;
                    break;
                }
                var s1 = s[b];
                var next = false;
                for (var i = a; i < b; i++)
                {
                    if (s[i] == s1)
                    {
                        var r = b - a;
                        max = r > max ? r : max;
                        a = i + 1;
                        b++;
                        next = true;
                        break;
                    }
                }
                if (next) continue;
                b++;
            }

            return max;
        }
    }
}