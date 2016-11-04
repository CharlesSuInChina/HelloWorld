#include <iostream>
#include <climits>

int main(void)
{
	using namespace std;
	
    short n_short_max = SHRT_MAX;
	cout << "sizeof (short) is : " << sizeof (short) <<endl;
	cout << "sizeof n_short_max is : " << sizeof n_short_max <<endl;
	cout << "sizeof SHRT_MAX is : " << sizeof SHRT_MAX <<endl;
	cout << "n_short_max is : " <<  n_short_max  <<endl;
	cout << "SHRT_MAX is : " <<  SHRT_MAX  <<endl<<endl;
	
	short n_short_min = SHRT_MIN;
    cout << "sizeof n_short_min is : " << sizeof n_short_min <<endl;
	cout << "sizeof SHRT_MIN is : " << sizeof SHRT_MIN <<endl;
	cout << "n_short_min is : " <<  n_short_min  <<endl;
	cout << "SHRT_MIN is : " <<  SHRT_MIN  <<endl<<endl;
	
	int n_int_max = INT_MAX;
	cout << "sizeof (int) is : " << sizeof (int) <<endl;
	cout << "sizeof n_int_max is : " << sizeof n_int_max <<endl;
	cout << "sizeof INT_MAX is : " << sizeof INT_MAX <<endl;
	cout << "n_int_max is : " <<  n_int_max  <<endl;
	cout << "INT_MAX is : " <<  INT_MAX  <<endl<<endl;
	
    int n_int_min = INT_MIN;
    cout << "sizeof n_int_min is : " << sizeof n_int_min <<endl;
	cout << "sizeof INT_MIN is : " << sizeof INT_MIN <<endl;
	cout << "n_int_min is : " <<  n_int_min  <<endl;
	cout << "INT_MIN is : " <<  INT_MIN  <<endl<<endl;
	
    long n_long_max = LONG_MAX;
	cout << "sizeof (long) is : " << sizeof (long) <<endl;
	cout << "sizeof n_long_max is : " << sizeof n_long_max <<endl;
	cout << "sizeof LONG_MAX is : " << sizeof LONG_MAX <<endl;
	cout << "n_long_max is : " <<  n_long_max  <<endl;
	cout << "LONG_MAX is : " <<  LONG_MAX  <<endl<<endl;
	
	long n_long_min = LONG_MIN;
    cout << "sizeof n_long_min is : " << sizeof n_long_min <<endl;
	cout << "sizeof LONG_MIN is : " << sizeof LONG_MIN <<endl;
	cout << "n_long_min is : " <<  n_long_min  <<endl;
	cout << "LONG_MIN is : " <<  LONG_MIN  <<endl<<endl;
	
	long long n_llong_max = LLONG_MAX;
	cout << "sizeof (long long) is : " << sizeof (long long) <<endl;
	cout << "sizeof n_llong_max is : " << sizeof n_llong_max <<endl;
	cout << "sizeof LLONG_MAX is : " << sizeof LLONG_MAX <<endl;
	cout << "n_llong_max is : " <<  n_llong_max  <<endl;
	cout << "LLONG_MAX is : " <<  LLONG_MAX  <<endl<<endl;
	
    long long n_llong_min = LLONG_MIN;
    cout << "sizeof n_llong_min is : " << sizeof n_llong_min <<endl;
	cout << "sizeof LLONG_MIN is : " << sizeof LLONG_MIN <<endl;
	cout << "n_llong_min is : " <<  n_llong_min  <<endl;
	cout << "LLONG_MIN is : " <<  LLONG_MIN  <<endl<<endl;
	
	cout << "Bits per byte = " << CHAR_BIT << endl;
	
	cin.get();
	cin.get();
}