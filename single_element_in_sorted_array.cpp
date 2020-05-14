//O(log(n)) time complexity with 16 ms;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int s = 0;
        int e = nums.size() - 1;
        while(s < e)
        {
            int m = s + (e-s)/2;
            if(m % 2 == 0)
            {
                if(nums[m] == nums[m-1])
                {
                    e = m - 2;
                }
                else if(nums[m] == nums[m+1])
                {
                    s = m + 2;
                }
                else
                {
                    return nums[m];
                }
                continue;
            }
            if(nums[m] == nums[m-1])
            {
                s = m + 1;
            }
            else if(nums[m] == nums[m+1])
            {
                e = m - 1;
            }
        }
        return nums[s];
    }
};


//O(n) time complexity and funnily better runtime :-) (12ms)
//class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) 
//     {
//         int x = 0;
//         for(int i : nums)
//         {
//             x ^= i;
//         }
//         return x;
//     }
// };