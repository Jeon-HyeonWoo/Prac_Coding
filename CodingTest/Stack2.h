#pragma once
#include "pch.h"

/* 올바른 괄호 / Level 2 / Stack, Queue */

/* Perfect Solution*/

bool solution2(string s)
{
	int n = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		if (n < 0)
		{
			return false;
		}

		if (s[i] == '(')
		{
			n++;
		}
		else if (s[i] == ')')
		{
			n--;
		}
	}

	return n == 0;
}

/* My Solution */
bool solution(string s)
{
	bool answer = true;

	if (s.size() % 2 == 1)
	{
		return false;
	}

	if (s[0] == ')')
	{
		return false; 
	}

	vector<char> vec;
	vec.push_back(s[0]);

	for (int i = 1; i < s.size(); ++i)
	{
		if (s[i] == '(')
		{
			vec.push_back(s[i]);
		}
		else
		{
			if (vec.empty())
			{
				return false;
			}
			vec.pop_back();
		}
	}

	answer = vec.size() == 0 ? true : false;

	return answer;
}