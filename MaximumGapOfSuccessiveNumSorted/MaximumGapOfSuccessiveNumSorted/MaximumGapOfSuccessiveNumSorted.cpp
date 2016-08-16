// MaximumGapOfSuccessiveNumSorted.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"MaximumGapOfSuccessiveNumSorted.h"
using namespace std;

int main()
{
	int m;
	cin >> m;
	vector<int> nums(m);
	for (int i = 0; i < m; cin >> nums[i++]);
	MaxGapOfSuccessiveNums MGSN;
	cout << MGSN.maximumGap(nums) << '\n';
    return 0;
}

