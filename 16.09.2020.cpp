#include "stdafx.h"
#include <iostream>
using namespace std;
//биномиальный коэффициент
int main() {
	int n, k, c, N_1, K_1, C_1;
	cin >> n;
	N_1 = n;
	cin >> k;
	K_1 = k;
	c = n - k;
	C_1 = c;
	for (int i = 1; i < N_1; i++) {
		n = n*i;
	}
	for (int i = 1; i < K_1; i++) {
		k = k*i;
	}
	for (int i = 1; i < C_1; i++) {
		c = c*i;
	}
	cout << (n / (k * c));
	system("PAUSE");
	return 0;
}
