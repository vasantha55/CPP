#include <iostream>
#include <clocale>
#define START1 "\033[36;41;1m"
#define START2 "\033[36;47;1m"
#define START3 "\033[36;42;1m"
#define RESET "\033[0m"
using namespace std;
int main(void)
{
	cout << START1;
	cout << "HAPPY" << "  ";
	cout << START2;
	cout << "Birthday" << "  ";
	cout << START3;
	cout << "Srikanth" << "  ";
	cout << RESET << endl;
	return 0;
}

