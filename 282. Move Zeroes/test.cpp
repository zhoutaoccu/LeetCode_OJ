#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeores(vector<int>& nums) {
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

int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    vector<int> vec(arr, arr + sizeof(arr)/sizeof(int));
    Solution().moveZeores(vec);
    for (int i = 0; i < vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    return 0;
}