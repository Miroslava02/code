#include "stdafx.h"
#include <iostream>
#include <cassert>
using namespace std;
//реализация функции Аккермана
int A(int m, int n)
{
	if (m == 0) {
		return (n + 1);
	}
	else if ((n == 0) && (m > 0)) {
		return A(m - 1, 1);
	}
	else if ((n > 0) && (m > 0)) return A(m - 1, A(m, n - 1));
}

int main(){
	assert(A(0, 0) == 1);
	assert(A(1, 0) == 2);
	assert(A(0, 1) == 2);
	assert(A(1, 1) == 3);
	assert(A(1, 2) == 4);
	assert(A(2, 1) == 5);

	int m, n;
	cin >> m;
	cin >> n;
	cout << A(m, n);
	system("PAUSE");
    return 0;
}

