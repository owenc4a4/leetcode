namespace s20
{
public class Solution {
public bool IsValid(string s)
        {
            if (s.Length % 2 != 0)
            {
                return false;
            }

            var stack = new Stack<char>();

            for (int i = 0; i < s.Length; i++)
            {
                var ch = s[i];
                if (ch == '(' || ch == '[' || ch == '{')
                {
                    stack.Push(ch);
                    continue;
                }

                if (ch == ')')
                {
                    if (stack.Count == 0)
                    {
                        return false;
                    }

                    if ('(' != stack.Pop())
                    {
                        return false;
                    }
                }
                else if (ch == ']')
                {
                    if (stack.Count == 0)
                    {
                        return false;
                    }

                    if ('[' != stack.Pop())
                    {
                        return false;
                    }
                }
                else if (ch == '}')
                {
                    if (stack.Count == 0)
                    {
                        return false;
                    }

                    if ('{' != stack.Pop())
                    {
                        return false;
                    }
                }

            }

            return stack.Count == 0;
        }
}
}