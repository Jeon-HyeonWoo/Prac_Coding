#pragma once
#include "pch.h"

// Hash / level 1 / Æ÷ÄÏ¸ó

/* My Solution */
int solution(vector<int> nums)
{
	int answer{ };
	
	unordered_set<int> unset;
	
	for (auto e : nums)
	{
		unset.emplace(e);
	}

	if (unset.size() > nums.size() / 2)
	{
		answer = nums.size() / 2;
	}
	else
	{
		answer = unset.size();
	}

	return answer;
}