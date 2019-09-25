#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {

        vector<string> result;
        if (digits.size() == 0)
        {
            return result;
        }
        map<string, string> letters{
            {"2", "abc"},
            {"3", "def"},
            {"4", "ghi"},
            {"5", "jkl"},
            {"6", "mno"},
            {"7", "pqrs"},
            {"8", "tuv"},
            {"9", "wxyz"},
        };

        vector<int> nextIndex;
        int i = 0;
        int j = 0;
        //vector<string> result;
        string res = "";
        while (true)
        {
            if (i >= nextIndex.size() && i < digits.size())
            {
                nextIndex.push_back(0);
            }

            if (i == digits.size())
            {
                i--;
                result.push_back(res);
                res.pop_back();
                continue;
            }
            j = nextIndex[i];

            string digit = digits.substr(i, 1);
            string letter = letters[digit];

            if (j < letter.size())
            {
                res = res + letter[j];
                nextIndex[i] = ++j;
                i++;
                continue;
            }

            for (int k = i; k < nextIndex.size(); k++)
            {
                nextIndex[k] = 0;
            }
            i--;
            if (i < 0)
            {
                break;
            }
            j = nextIndex[i];

            res.pop_back();
        }
        return result;
    }
};