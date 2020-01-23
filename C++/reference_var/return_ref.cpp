#include <iostream>
using namespace std;
void fun(int &);

int main(void)	
{
	int var = 5;
	/*int *ptr = NULL;
	//int *&ref_var = ptr; //refernce to pointer
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
	//cout << "ref_var -" << *ref_var << endl; */
	int &ref_var = var;
	fun(var);
	//cout << "ref_var-" << ref_var << endl;
	cout << "var-" << var << endl;
	return 0;
}

void fun(int &ref_var)
{
	cout << "I am in fun" << endl;
	ref_var *= 100;
	//return ref_var;
}
