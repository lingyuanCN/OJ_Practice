/*
53. Maximum Subarray


Given an integer array nums, find the contiguous subarray(containing at least one number) which has the largest sum and return its sum.

Example:

	Input: [-2, 1, -3, 4, -1, 2, 1, -5, 4] ,
	Output : 6
	Explanation : [4, -1, 2, 1] has the largest sum = 6.

Follow up :
	If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/

#include <vector>
#include <iostream>
using namespace std;

class Solution
{
private:
	int current_sum;
	int current_max;

public:
	int maxSubArray(vector<int> &nums)
	{
		current_sum = nums[0];
		current_max = nums[0];
		cout << current_sum << ' ' << current_max << endl;
	}
};

int main()
{
	Solution s;
	vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	s.maxSubArray(nums);
}