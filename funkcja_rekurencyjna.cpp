#include <iostream>
using namespace std;
int potega(int n)
{
	int wynik=1;
	if (n > 0) wynik = potega(n - 1)*2;
	else wynik = 1;
	return wynik;
}
int main()
{
	cout << potega(5);
}