#include <iostream>
using namespace std;

int main(){
    int a = 5;
    char b = 'A';
    char &c = b;
    int *x = &a;
    char *y = &b;
    int **z = &x;
    char i = ' ';
    
    cout << a << i << b << i << c << i << x << i << (int *)y << i << z << '\n';
    cout << &a << i << (int *)&b << i << (int *)&c << i << &x << i << &y << i << &z << '\n';
    c = 'F';
    cout << a << i << b << i << c << i << x << i << (int *)y << i << z << '\n';
    *y = 'W';
    cout << a << i << b << i << c << i << x << i << (int *)y << i << z << '\n';
    *x = 6;
    cout << a << i << b << i << c << i << x << i << (int *)y << i << z << '\n';
    **z = 7;
    cout << a << i << b << i << c << i << x << i << (int *)y << i << z << '\n';
	
	return 0;
}