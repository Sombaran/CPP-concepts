

/**
 * One can use -D/ -U name to define and un-define a macro from command line 
 * 
 * One can use # and ## operators in macro
 * The operator #  followed by parameter name is replaced by string literal that contains argument passed.
 * The operator ## concatenated two arguments
 * 
 * commenting large chunk of code by using #if 0 followed by large chunk of dode an ended with #endif
 * 
 * selective debugging 
 * 
 * include code for debugging via command line then compile using -D _DEBUG 
 * make a release code then compile using -U _DEBUG if by default debug is defined in line number 35
 * 
 * one can include a header from command line --> just comment out line number 22 
 * g++ macros_directive_preprocessor.cpp -D FLAG=1 -D _DEBUG -include iostream  -o nptel_macro
 * 
 * some useful directive
 * #line --> it is used to reset the line number in the code. We can reset line number from any line in the code.
 * 
 * __cplusplus directs compiler to include c++ compiler
 * 
 * 
 * #pragma pragma does not have a specific meaning, any compiler vendor who is writing compiler can define
 * #pragma with some parameter/ name and those are implementation defined subsequent relpace for include guard 
 * 
 * with pragma it looks cleaner but it may have compiler issues across different machines
 * 
 * */


//#include <iostream>


#pragma once

#define str(x)                  #x
#define someargumet(a,b)        a ## b 

int main() {
	std::cout << (FLAG) << std::endl;

    #ifdef _DEBUG 

	std::cout << str(test single hash) << std::endl;
	std::someargumet(cou,t) << "test double hash" << std::someargumet(e,ndl);
    #endif

    #line 200

    std::someargumet(cou,t) << "test double hash " << __LINE__  << " " << __cplusplus << std::someargumet(e,ndl);

	return (0);
	}



