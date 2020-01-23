#include <iostream>
using namespace std;
void fun(void);
int global = 10;
int &ref_var = global;

int main(void)
{
	int var = 5;
	//int var2 = 7;
	//int &ref_var = var;
	ref_var *= var;
	//ref_var = var2;
	//ref_var++;
	cout << "var-" << var << endl;
	//cout << "var2-" << var2 << endl;
	fun();
	cout << "ref_var-" << ref_var << endl;
	cout << "global-" << global << endl;
	//cout << "ref_var_addr-" << hex << (unsigned *)&ref_var << endl;
	//cout << "var_addr-" << hex << (unsigned *)&var << endl;
	//cout << "var2_addr-" << hex << (unsigned *)&var2 << endl;
	return 0;
}
