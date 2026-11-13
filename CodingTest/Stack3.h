#pragma once
#include "pch.h"

/* 기능 개발 / Level 2 / Stack, Queue */

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
	vector<int> answer;
	
	vector<int> vec;
	
	for (int i = 0; i < progresses.size(); ++i)
	{
		vec.push_back((100 - progresses[i]) / speeds[i]);

		if ((100 - progresses[i]) % speeds[i] != 0)
		{
			vec[i]++;
		}
	}
	
	int count = 0;
	
	
	int a = vec[0];
	for (int i = 0; i < vec.size(); ++i)
	{
		if (a < vec[i])
		{
			answer.push_back(count);
			a = vec[i];
			count = 0;
		}
		count++;
	}
	answer.push_back(count);

	return answer;
}


/*
* 7 >= 7
* count = 1
* 7 >= 2
* count = 2
* 7 >= 9 -> else a = 9 
*/


/*
progresses			93, 30, 55
speeds				1 , 30, 5
100 - progresses	7,  70, 45
몫					7,  2,  9
나머지				0, 10,  0
vec					7,  3,  9
					1   2 0 1
*/