//ourfunc.cpp -- defining your own function
#include <iostream>
void simon(int);

int main()
{
	using namespace std;
	simon(3);

	cin.get();
	cin.get();
    return 0;
}

void simon(int n)
{
	using namespace std;
	cout << "Simon was called " << n << " times"<< endl;
}