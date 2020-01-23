#include <iostream>
using namespace std;

int main(void)
{
	int array[5] = {10,20,30,40,50};
	int &ref_var[5] = {array,array+1,array+2,array+3,array+4};
	int loop = 0;
	for (loop = 0; loop < 5; loop++) {
		cout << "array["<< loop << "] - " << array[loop] << endl;
		//cout << "ref_var["<< loop << "] - " << ref_var[loop] << endl;
	}
	return 0;
}

