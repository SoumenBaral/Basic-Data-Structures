#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int max = (nums[0]-1)*(nums[1]-1);
        // int max = nums[0];
        return max;
    }
};
int main ()
{
    
    return 0;
}