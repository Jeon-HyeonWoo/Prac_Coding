#pragma once  
#include "pch.h"  

// Hash / Level1 / 완주하지 못한 선수



/* Other Solution 1 - None Hash */
string solution(vector<string> participant, vector<string> completion)
{
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());

	for (int i = 0; completion.size(); ++i)
	{
		if (participant[i] != completion[i])
		{
			return participant[i];
		}
	}

	return participant[participant.size() - 1];
}

/* MySolution */
string solution(vector<string> participant, vector<string> completion)  
{  
	string answer = "";  

	map<string, int> m;

	for (auto e : participant)
	{
		m[e]++;
	}

	for (auto e : completion)
	{
		m[e]--;
	}

	for (auto e : m)
	{
		if (e.second > 0)
		{
			answer = e.first;
		}
	}

	return answer;  
}