#include <iostream>
using namespace std;

int main(void)
{
	int var = 5;
	int *ptr = NULL;
	//int *&ref_var = ptr; /*refernce to pointer*/
	int &ref_var = var;
	ptr = &ref_var;    //ptr to reference//
	*ptr = 10;
	//ref_var = 11;
	cout << "var -" << var << endl;
	cout << "ptr -" << *ptr << endl;
	cout << "ref_var -" << ref_var << endl;
	cout << "var_addr -" << &var << endl;
	cout << "ref_var_addr -" << &ref_var << endl;
	cout << "ptr_addr -" << &ptr << endl;
	//cout << "ref_var -" << *ref_var << endl;
	return 0;
}

