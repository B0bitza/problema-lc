#include <iostream>
using namespace std;

long long int nr, d,i;

long long int nrprim(int nr)
{
	for (d = 2; d <= nr / 2; d++)
		if (nr % d == 0)
			return 0;
	return 1;
}

int main()
{
	cin >> nr;
	if (nr > 4 && nr % 2 == 0)
		for (i = 0; i < nr; i++)
			if (nrprim(i) == 1 && nrprim(nr - i) == 1)
			{
				cout <<nr<<"=" << i << "+" << nr - i << endl;
			}
	return 0;
}