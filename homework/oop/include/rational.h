#ifndef RM_TUTORIAL_INCLUDE_RATIONAL_H_
#define RM_TUTORIAL_INCLUDE_RATIONAL_H_

class Rational {
 public:
  // default-value constructor
  Rational();
  // explicit-value constructor
  Rational(int numer, int denom = 1);
  // arithmetic functions
  //...
  //...
  //...
  // relational functions
  bool equal(Rational r) const;
  bool lessThan(Rational r) const;
  // i/o functions
  void display() const;
  void get();
 private:    // data members
  int numerator_;
  int denominator_;
};

#endif //RM_TUTORIAL_INCLUDE_RATIONAL_H_

