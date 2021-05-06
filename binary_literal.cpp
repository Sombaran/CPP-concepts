
/*
 * @Brief: Like in hexadecimal and octal numbers, 
 * now we can directly write binary literals (of the form 0’s and 1’s) in C++14. 
 * The binary number can be expressed as 0b or 0B as the prefix.
 * Below implementation is done using generic lambda's C++14
 */
 
#include <iostream>

auto genericLiteral = [](auto valueReceived)
{
	return 	valueReceived;
};

int main()
{
	uint binVar_1 {0B1111'1111}, binVar_2 {0b1111'1111}; //binary literal
	uint hexaVal {0x13ac};
        uint octaVal {0117}; 
	std::cout << "Binary literal with prefix /'0B/' " << genericLiteral(binVar_1) << std::endl;
	std::cout << "Binary literal with prefix /'0b/' " << genericLiteral(binVar_2) << std::endl;
	std::cout << "Hexadecimal literal with prefix /'0x/' " << genericLiteral(hexaVal) << std::endl;
	std::cout << "Octal literal with prefix /'0/' " << genericLiteral(octaVal) << std::endl;
	return (0);
}
