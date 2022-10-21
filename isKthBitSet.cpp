// CPP program to check if k-th bit
// of a given number is set or not using
// right shift operator.
#include <iostream>
using namespace std;

void isKthBitSet(int n, int k)
{
	if ((n >> (k - 1)) & 1)
		cout << "SET";
	else
		cout << "NOT SET";
}

// Driver code
int main()
{
	int n = 5, k = 1;

	// Function call
	isKthBitSet(n, k);
	return 0;
}
