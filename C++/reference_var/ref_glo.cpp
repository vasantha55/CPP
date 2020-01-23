#include <iostream>
using namespace std;
extern int global;

void fun(void)
{
	global = 1000;
	cout << global << endl;
}
