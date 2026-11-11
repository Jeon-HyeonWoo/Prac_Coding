#include "Main.h"
#include "solution1.h"

int main(void)
{
	vector<int> arr{ 1, 1, 3, 3, 0, 1, 1 };
	for (const auto& e : Mysolution1(arr))
	{
		cout << e << " ";
	}

}