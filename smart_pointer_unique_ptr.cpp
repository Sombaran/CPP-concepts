/*
 * @Brief: Allows to have only one owner of the underlying object
 * Allowed operartions: get(), release(), swap(), reset(), get_deleter()
 */
 
#include <iostream>
#include <memory>


class unique_ptr
{
	std::string mString;
	public:
	unique_ptr(const std::string& String) :
	mString(String)
	{ std::cout << "Called -> I am constructor " << mString.c_str() << std::endl;}
	~unique_ptr(){ std::cout << "Called -> I am destructor " << std::endl;}
};
	
int main()
{
   #if 0
   unique_ptr* u = new unique_ptr();
   delete u;
   #endif
   std::unique_ptr <unique_ptr> u_1{new unique_ptr("Parameterized constructor")};
   std::unique_ptr <unique_ptr> u_2 {move(u_1)};
   if (u_2 && nullptr != u_2) //{ }
   {
   //make unique works in c++14 for mac compiler Apple clang version 11.0.0 (clang-1100.0.33.8)
   std::unique_ptr <unique_ptr> u_3 {std::make_unique<unique_ptr> ("Exception free parameterized constructor")};
   std::cout << "Giving pointer it holds in it u_1 " << u_1.get() << " Address: u_1 " << u_1 << std::endl;
   std::cout << "Giving pointer it holds in it u_2 " << u_2.get() << " Address: u_2 " << u_2 << std::endl;
   std::cout << "Giving pointer it holds in it u_3 " << u_3.get() << " Address: u_3 " << u_3 << std::endl;
   std::cout << "Releasing pointer it holds in it u_1 " << u_1.release() << " Address: u_1 " << u_1 << std::endl;
   std::cout << "Releasing pointer it holds in it u_2 " << u_2.release() << " Address: u_2 " << u_2 << std::endl;
   std::cout << "Releasing pointer it holds in it u_3 " << u_3.release() << " Address: u_3 " << u_3 << std::endl;
   }
   else
   {
	   std::cout << "U_2 is not null_ptr " <<std::endl;
   }
	return (0);
}