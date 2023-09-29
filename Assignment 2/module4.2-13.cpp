#include <iostream>
using namespace std;
class A {
private: // private data member 
  int x, y;

public:
  friend void fun(); // Friend function
};
void fun() {
  A obj;
  obj.x = 10;
  obj.y = 20;
  obj.x = obj.x + obj.y ;
  obj.y = obj.x - obj.y ;
  obj.x = obj.x - obj.y ;
  cout << "X :" << obj.x << endl;
  cout << "Y :" << obj.y << endl;
}
int main() {
  cout << "Hello W	orld!\n";
  fun();  
}