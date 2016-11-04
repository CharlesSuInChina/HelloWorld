// convert.cpp -- converts stone to pounds
#include <iostream>
int stonetolb(int);
int main()
{
	using namespace std;
	int stone;
	cout << "enter stone number:";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << "the pounds is : " << pounds ;
	cin.get();
	cin.get();
}

int stonetolb(int stone)
{
	return stone * 14;
}