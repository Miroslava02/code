#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <math.h>
//среднее арифмитеческое суммы кубов
using namespace std;
int main() {
	int N, S = 0, i = 1 ;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		S = S + pow(i,3);
	}
	cout << (S / N);
	system("PAUSE");
	return 0;
}
