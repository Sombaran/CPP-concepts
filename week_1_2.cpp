/*
 * @Brief:Const is a replica of #define and const can be decalred in any scope whereas #define has a global scope 
 * Pointer types:
 * pointer to constant (const int two = 2)
 * constant pointer (int *const two = 2)
 * volatile pointer 
 */

#include <iostream>
const int two = 2;
const double pi = 3.14;
void constant_pointer (void);
void pointer_to_constant_data(void);

int main(void) {
	int r = 10;
	double peri = two * pi * r;
	std::cout << "The value of \"per\" is " << peri << std::endl;
	//std::cout << std::endl;
	//std::cout << std::endl;
	constant_pointer ();
	std::cout << std::endl;
    //usleep(10000);
	pointer_to_constant_data();

	
	return(0);
}
void pointer_to_constant_data(void){
	std::cout << "Pointer to constant data " << std::endl;
	int m = 10;
	const int n = 5;
	const int *p  = &n; 
	std::cout << "The value of \"n\" " << n << std::endl;
	std::cout << "The value of \"*P\" " << *p << std::endl;
	std::cout << "The address of \"n\" " << &n << std::endl;
	/* error: cannot assign to variable 'n' with const-qualified type 'const int' */
	//n = 6;
	//std::cout << "The value of \"n\" " << n << std::endl;
	//*p = 8;
	//std::cout << "The value of \"*P\" " << *p << std::endl;

}

void constant_pointer(void) {
	std::cout << "constant pointer " << std::endl;
	int m = 4 , n = 5;
	int *const  p = &n;
	std::cout << "The value of \"n\" " << n << std::endl;
	std::cout << "The value of \"*P\" " << *p << std::endl;
	std::cout << "The address of \"n\" " << &n << std::endl;
	*p = 11;
	std::cout << "The value of \"*P\" " << *p << std::endl;
	std::cout << "The address of \"n\" " << &n << std::endl;
	n = 22;
	std::cout << "The value of \"*P\" " << *p << std::endl;
	std::cout << "The value of \"n\" " << n << std::endl;
	std::cout << "The address of \"n\" " << &n << std::endl;
	/* Error: assigning to 'int' from incompatible type 'int *'; remove & */

	//*p = &m; 
	//std::cout << "The value of \"*P\" " << *p << std::endl;
	//std::cout << "The value of \"m\" " << m << std::endl;
	//std::cout << "The address of \"m\" " << &m << std::endl;
}
