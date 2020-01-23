#include <iostream>
using namespace std;

namespace first {
	  int var1;
	  char ch1;
	  namespace second {
	            //int num = 5;
	            int var1 = 5;
                char name[5] = "vasu";
	  }
}

int main (void)
{
	cout << first::second::var1 << endl;
	//using namespace first;
	//var1 = 7;
	//cout << var1 << endl;
	cout << first::second::name << endl;
}
