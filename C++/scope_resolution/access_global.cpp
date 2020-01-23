#include <iostream>
using namespace std;
int var = 7;
int main(void)
{
	int var = 5;
	cout << "var in local --> " << var << endl;
	cout << "var in global ---> " << ::var << endl;
	return 0;
}
