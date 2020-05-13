class Solution {
public:
    int firstBadVersion(int n) 
    {
        int s = 1;
        int e = n;
        int m = 0;
        int i = 0;
        while( s <= e)
        {
            m = s + (e - s) / 2;
            if(isBadVersion(m) == true)
            {
                e = m - 1;
            }
            else
            {
                s = m + 1;
            }
        }
        return s;
    }
};