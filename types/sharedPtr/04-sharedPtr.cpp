#include <iostream>
#include <memory>

// TODO: Implement foo()
// It should take shared_ptr to int and assign value 20 to the pointed  int.
// It should also display the value of this int and the number of how many
// pointers are pointing to it - use `use_count()`. Display the same information
// in main() before and after calling foo()

void foo(std::shared_ptr<int> ptr) {
  std::cout << "Value of pointed  object inside foo() before change: " << *ptr
            << "\n"
            << "Number of shared_ptr instances inside foo(): "
            << ptr.use_count() << "\n";
  *ptr = 20;
}

int main() {
  std::shared_ptr<int> number = std::make_shared<int>(10);
  // display the value under number pointer and use_count() of it
  std::cout << "Value of pointed object before foo() call: " << *number << "\n"
            << "Number of shared_ptr instances before foo() call: "
            << number.use_count() << "\n";

  foo(number);
  // display the value under number pointer and use_count() of it
  std::cout << "Value after change: " << *number << "\n"
            << "Number of shared_ptr instances outside foo(): "
            << number.use_count() << std::endl;

  return 0;
}
