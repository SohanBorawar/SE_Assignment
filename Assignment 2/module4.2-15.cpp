//Write a program of to swap the two values using templates

#include <iostream>
using namespace std;
template <class T> void swapping(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}
int main() {
  char a = 'A', b = 'B';
  int x = 20, y = 30;

  cout << "Before Swapping "
       << "A :" << a << " B :" << b << endl;
  swapping(a, b);
  cout << "After Swapping "
       << "A :" << a << " B :" << b << endl;

  cout << "Before Swapping "
       << "X :" << x << " Y :" << y << endl;
  swapping(x, y);
  cout << "After Swapping "
       << "X :" << x << " Y :" << y << endl;
}