#include <iostream>
using namespace std;

int calculation(int result, int n) {
	if (n <= 1)
	{
		return result;
	}
	result = result * n;
	n -= 1;
	calculation(result, n);
}

int main()
{
    int result = 1;
	int n;
	cout << "Enter your value\n";
	cin >> n;
	cout << calculation(result, n);
}
