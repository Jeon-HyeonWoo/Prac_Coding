#include "Main.h"
#include "solution3.h"

int main(void)
{
	vector<int> progresses{ 93, 30, 55 };
	vector<int> speed{ 1, 30, 5 };

	for (auto e : solution(progresses, speed))
	{
		cout << e << " ";
	}
	

}