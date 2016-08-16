#pragma once
#include<vector>
#include<algorithm>

class MaxGapOfSuccessiveNums {
public:
	int maximumGap(std::vector<int>& nums) {
		if (nums.size() <2)
			return 0;
		sort(nums.begin(), nums.end());
		int MaxDiff = 0, tempDiff = 0;
		for (int i = 1, len = nums.size(); i <len; i++) {
			tempDiff = nums[i] - nums[i - 1];
			if (tempDiff >MaxDiff)
				MaxDiff = tempDiff;
		}
		return MaxDiff;
	}
};