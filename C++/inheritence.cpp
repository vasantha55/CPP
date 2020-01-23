#include <iostream>
using namespace std;

class hai {
	public:
		int a;
		int b;
		void fun() {
			cout<<"hai"<<endl;
		}
};
//class hello :hai
//{
//	public:
		void fun() {
			cout<<"hello"<<endl;
		}
//};
int main(void)
{
	hai h;
	h.fun();
	return 0;
}
