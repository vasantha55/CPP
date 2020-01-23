#include <iostream>
//void fun();

using namespace std;

namespace {
	  int var1 = 5;
}

namespace first {
	   int var1 = 10;
}
/*namespace first {
	  string name;
}*/
//using namespace first;
//int var1 = 10;

int main (void)
{
	//fun();
	using namespace first;
	cout << var1 << endl;
}
