#include <iostream>
#include <vector>
using namespace std;

//时间复杂度O(n)
//空间复杂度O(n)
class Solution_0 {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> nonzeroes_vector;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i])
                nonzeroes_vector.push_back(nums[i]);
        }
        for (int i = 0; i < nonzeroes_vector.size(); i++)
        {
            nums[i] = nonzeroes_vector[i];
        }
        for (int i = nonzeroes_vector.size(); i < nums.size(); i++)
        {
            nums[i] = 0;
        }
    }
};

//时间复杂度O(n)
//空间复杂度O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for ( int i = 0; i < nums.size(); i++)
            if (nums[i])
                nums[k++] = nums[i];
        for ( int j = k; j < nums.size(); j++)
            nums[j] = 0;
    }
};

//时间复杂度O(n)
//空间复杂度O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for ( int i = 0; i < nums.size(); i++)
            if (nums[i])
                if (i != k)
                    swap(nums[k++],nums[i]);
                else
                    k++;

    }
};