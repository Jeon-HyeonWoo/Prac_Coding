#pragma once
#include "pch.h"

//같은 숫자는 싫어 / Level 1 / Stack

/* Perfect Answer */
vector<int> solution1(vector<int> arr)
{
	arr.erase(unique(arr.begin(), arr.end()), arr.end());
	
	return arr;
}

/* My Answer */
vector<int> Mysolution1(vector<int> arr)
{
	vector<int> answer;

	int top = *arr.begin();
	answer.emplace_back(top);
	
	for (int i = 1; i < arr.size(); ++i)
	{
		if (top == arr[i])
		{
			continue;
		}
		else
		{
			top = arr[i];
			answer.emplace_back(top);
		}
	}	

	return answer;
}
