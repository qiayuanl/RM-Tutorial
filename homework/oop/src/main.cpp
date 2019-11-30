#include "rational.h"
#include "iostream"
using namespace std;
int main() {
  Rational r;
  Rational s;
  cout << "Enter two rationals(a/b): ";
  r.get();
  s.get();
  Rational t(r);

  //Rational sum = r + s;
  r.display();
  cout << " + ";
  s.display();
  cout << " = ";
  //sum.display();
  cout << endl;
  //Rational product = r * s;
  r.display();
  cout << " * ";
  s.display();
  cout << " = ";
  //product.display();
  cout << endl;
} 
