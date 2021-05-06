/*
 * @Brief: Like in hexadecimal and octal numbers, 
 * now we can directly write binary literals (of the form 0âs and 1âs) in C++14. 
 * The binary number can be expressed as 0b or 0B as the prefix.
 * Below implementation is done using generic lambda's C++14
 */

#include <iostream>
[[Deprecated("__________USING LAMBDA__SIMPLE____1")]]
auto autoReturnTypeLambda_1 = [] (auto a, auto b)
{
	return (a+b);
};

[[Deprecated("__________USING LAMBDA__REFERENCE_2")]]
auto autoReturnTypeLambda_2 = [] (auto& a, auto& b)
{
	return (a+b);
};

[[Deprecated("__________USING LAMBDA__REFERENCE_3")]]
auto autoReturnTypeLambda_3 = [] (auto& a)
{
	return (a);
};

[[Deprecated("__________USING AUTOTYPEDEDUCTION__NO__REFERENCE_1")]]
auto returnAutoTypeDeduction_1 (uint valueReceived)
{
	return (valueReceived);
}

[[Deprecated("__________USING AUTOTYPEDEDUCTION______REFERENCE_2")]]
// If no & is put with auto then also it work ...!! STRANGE
auto& returnAutoTypeDeduction_2 (const uint& valueReceived)
{
	return (valueReceived);
}

[[Deprecated("__________USING AUTOTYPEDEDUCTION______REFERENCE_3")]]
// remove const usibg const_Cast
auto& returnAutoTypeDeduction_3 (uint& valueReceived)
{
	return (valueReceived);
}
int main()
{
	uint var_1 {4200u}, var_2{1356u};
	std::cout << "Simple auto return type deduction: --> USING LAMBDA__SIMPLE____1 " << autoReturnTypeLambda_1(var_1, var_2) << std::endl; 
  std::cout << "Simple auto return type deduction: --> USING LAMBDA__REFERENCE_2 " << autoReturnTypeLambda_2(var_1, var_2) << std::endl;
  const uint& var_3 {var_2};
  std::cout << "Simple auto return type deduction: --> USING LAMBDA__REFERENCE_3 " << autoReturnTypeLambda_3(var_3) << std::endl;
  std::cout << std::endl;
  uint var_4 {1947};
  std::cout << "Simple auto return type deduction: --> USING AUTOTYPEDEDUCTION__NO__REFERENCE_1 " << returnAutoTypeDeduction_1(var_4) << std::endl;
  const uint& var_5{var_4};
  std::cout << "Simple auto return type deduction: --> USING AUTOTYPEDEDUCTION______REFERENCE_2 " << returnAutoTypeDeduction_2(var_5) << std::endl;
  //remove const usibg const_Cast
  uint finalVal = const_cast<uint& > (var_5);
  std::cout << "Simple auto return type deduction: --> USING AUTOTYPEDEDUCTION______REFERENCE_3 " << returnAutoTypeDeduction_3(finalVal) << std::endl;
	return (0);
}