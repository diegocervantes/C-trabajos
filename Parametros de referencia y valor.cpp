#include <iostream>
using namespace std;
 
int funcion(int &n, int &m);
 
int main() { 
   int a, b;
 
   a = 10; b = 20; 
   cout << a << ", " << b << endl;
   cout << funcion(a, b) << endl; 
   cout << a << ", " << b << endl; 
   return 0; 
}
 
int funcion(int &n, int &m) {
   n = n + 2; 
   m = m - 5; 
   return n+m;	
}
