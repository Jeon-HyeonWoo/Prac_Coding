#include "Main.h"
#include "sort1.h"

int main(void)
{
	vector<int> n{ 1, 5, 2, 6, 3, 7, 4 };
	vector<vector<int>> n2{ {2, 5, 3 }, { 4, 4, 1 }, { 1, 7, 3 } };

	for (auto e : solution(n, n2))
	{
		cout << e << " ";
	}
}






