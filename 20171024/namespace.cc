 ///
 /// @file    namespace.cc
 /// @author  liweihang
 /// @date    2017-10-24 07:31:38
 ///
 
#include <iostream>
using std::cout;
using std::endl;

namespace frist_space
{
  void func()
  {
    cout << "Inside first_space" << endl;
  }
}
namespace second_space
{
  void func()
  {
    cout << "helloo second_space" << endl;
  
  }
}
using namespace second_space;
using namespace frist_space;

int main()
{
   func();

   func();
  
   return 0;
}
