#include <iostream>


int main(void)
{
std::string checkString;

if (nullptr == checkString)
{
  std::cout << " WARNING " << std::endl;
}
checkString = " I read and right
She felt so light and we will unite
We will fight but again reunite coz
u in my right and will be my wife ";

std::cout << checkString.c_str() << std::endl;

  return (0);
}
