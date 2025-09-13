class Solution
{
public:
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' ||
                c == 'o' || c == 'u');
    }

    int maxFreqSum(string s)
    {
        int fre[26] = {0};
        int maxVowel = 0, maxConsonant = 0;
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            fre[c - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (fre[i] > 0)
            {
                char c = i + 'a';
                if (isVowel(c))
                {
                    maxVowel = max(maxVowel, fre[i]);
                }
                else
                {
                    maxConsonant = max(maxConsonant, fre[i]);
                }
            }
        }
        return maxVowel + maxConsonant;
    }
};
