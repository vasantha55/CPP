#include <iostream>
using namespace std;

int main(void)
{
	int var = 5;
	int var2 = 7;
	int &ref_var = var;
	int &ref_var2 = ref_var;
	ref_var = var2;
	ref_var++;
	ref_var2++;
	cout << "var-" << var << endl;
	cout << "var2-" << var2 << endl;
	cout << "ref_var-" << ref_var << endl;
	cout << "ref_var2-" << ref_var2 << endl;
	cout << "ref_var_addr-" << hex << (unsigned *)&ref_var << endl;
	cout << "ref_var_addr2-" << hex << (unsigned *)&ref_var2 << endl;
	cout << "var_addr-" << hex << (unsigned *)&var << endl;
	cout << "var2_addr-" << hex << (unsigned *)&var2 << endl;
	return 0;
}
