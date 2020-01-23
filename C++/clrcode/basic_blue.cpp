#include <iostream>
#include <clocale>

#define GRAY	"\033[30;40;1m"
#define RED		"\033[31;42;1m"
#define BLUE	"\033[34;41;1m"
#define GREEN	"\033[32;44;1m"
#define YELLOW	"\033[33;46;1m"
#define MAG		"\033[35;45;1m"
#define RESET	"\033[0m"

using namespace std;

int main(void)
{
	cout << uppercase << "jbchj" << endl;

	cout << RED;
	cout << "vassu" << endl;

	cout << BLUE;
	cout << "vassu" << endl;

	cout << GRAY;
	cout << "vassu" << endl;

	cout << YELLOW;
	cout << "vassu" << endl;

	cout << GREEN;
	cout << "vassu" << endl;

	cout << MAG;
	cout << "vassu" << endl;

	cout << RESET;
	return 0;
}

