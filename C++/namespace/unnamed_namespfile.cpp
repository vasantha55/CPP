#include <iostream>
using namespace std;
extern int var1;
void fun (void)
{
	cout << "I am in fun" << endl;
	cout << var1 << endl;
}
