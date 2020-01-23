#include <iostream>
using namespace std;

namespace first {
	  int var1;
}

namespace first {
	  int var1;
	  char name[5];
}

int main (void)
{
	cin >> first::var1 >> first::name;
	cout << first::var1 << endl << first::name << endl;
}
