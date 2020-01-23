#if 0
#include <iostream>
//using namespace std;

using namespace first {
	  int var1;
	  char name[10];
}

using namespace second {
	  int var1;
	  char name;
}

int main (void)
{
	cin >> first::var1 >> second::var1;
	cout << first::var1 << second::var1 << endl;
	//cout << var1 << endl;
}
#endif

/*NOTE: If we want to use same name of variables but in different class we used
	    namespace by using scope resolution we can access the variables. */

#if 0
#include <iostream>

using namespace std;

namespace first {
	  int var1 = 5;
          void fun (int num)
	  {
	      cout << "I am in function" << endl;
	  }
}

//int var1 = 7;

int main (void)
{
	using namespace first;
	cout << first::var1 << endl;
	first::fun(5);
}

#endif

#if 0 
#include <iostream>

using namespace std;

int main (void)
{
	namespace first {
	  	int var1 = 5;
          	void fun (int num)
	  	{
	      	cout << "I am in function" << endl;
	  	}
	}
	cout << first::var1 << endl;
	fun(5);
}

#endif

//Note:Namespace is not allowed in main because it is global we can't restricted to local
	    
#if 0
#include <iostream>
using namespace std;

namespace first {
	  int var = 5;
	  void test(void) {
	  	   cout << "test in 1" << endl; }
}

namespace second {
	   int var = 7;
	   void test(void) {
	        cout << "test in 2" << endl; }
}

int main(void)
{
	                                    {
	                                     using namespace first;
	cout << first::var << endl;  (or)    cout << var << endl;
	first::test();						 test();
	                                    }
	using namespace second;
	cout << var << endl;
    test();
    return 0;
}

#endif
































