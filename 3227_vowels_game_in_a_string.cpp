class Solution
{
public:
    bool isVowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool doesAliceWin(string s)
    {
        int vowCount = 0;
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (isVowel(c))
            {
                vowCount++;
            }
        }
        if (vowCount == 0)
        {
            return false;
        }
        else if (vowCount % 2 != 0)
        {
            return true;
        }
        else
        {
            return true;
        }
    }
};