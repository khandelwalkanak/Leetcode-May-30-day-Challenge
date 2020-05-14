class Solution {
public:
    string removeKdigits(string& num, int k) 
    {
        if(k <= 0)
        {
            return num;
        }
        int i = 0;
        for(; i < num.length() - 1; i++)
        {
            if(num[i] > num[i + 1])
            {
                break;
            }
        }
        if(num.length() > 0)
        {
            num.erase(num.begin() + i);
        }
        while(num[0] == '0' )
        {
            if(num.length() > 0) 
            {
                num.erase(num.begin());
            }
        }
        if(num.length() == 0)
        {
            num = "0";
            return num;
        }
        
        return removeKdigits(num, k-1);
    }
};