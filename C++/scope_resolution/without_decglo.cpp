#include <iostream>
using namespace std;
int main(void)
{
	int var = 5;
	cout << "var in local -" << var << endl;
	cout << "var in global -" << ::var << endl;
	return 0;
}
/*Note: It shows an error because global variable is not declared so without declaring we are trying to access global variable */
