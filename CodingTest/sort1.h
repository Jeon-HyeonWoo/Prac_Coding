#pragma once
#include "pch.h"

/* 정렬 / Level 1 / K 번째 수 */

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
	vector<int> answer;

	for (int i = 0; i < commands.size(); ++i)
	{
		vector<int> vec(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1]);
		sort(vec.begin(), vec.end());
		if (vec.size() == 1)
		{
			answer.push_back(vec[0]);
			vec.clear();
			continue;
		}
		answer.push_back(*(vec.begin() + commands[i][2] - 1));
		vec.clear();
	}


	return answer;
}