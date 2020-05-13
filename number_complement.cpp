class Solution {
public:
    int findComplement(int num) 
    {
        string res = "";
        while( num > 0)
        {
            res += to_string(num%2);
            num /= 2;
        }
        int n = 0;
        for(int i = 0; i < res.length(); i++)
        {
            if(res[i] == '0')
            {
                n += 1*(pow(2,i));
            }
        }
        return n;
    }
};