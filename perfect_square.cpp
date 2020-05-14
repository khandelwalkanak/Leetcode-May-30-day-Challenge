class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        if(num == 1)
        {
            return true;
        }
        int s = 0;
        int e = num/2;
        while(s <= e)
        {
            double m = (s + e)/2;
            if(m*m == num)
            {
                return true;
            }
            if(m*m > num)
            {
                e = m - 1;
                continue;
            }
            s = m + 1;
        }
        return false;
    }
};