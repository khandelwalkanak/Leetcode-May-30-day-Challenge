class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        vector<int> v(26,0);
        for(int i = 0; i < magazine.length(); i++)
        {
            v[magazine[i] - 'a']++;
        }
        for(int i = 0; i < ransomNote.length(); i++)
        {
            v[ransomNote[i] - 'a']--;
            if(v[ransomNote[i] - 'a'] < 0)
            {
                return false;
            }
        }
        return true;
    }
};