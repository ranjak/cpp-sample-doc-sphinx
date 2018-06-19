#include <iostream>

namespace MyLib
{
/// Secondary class for MyLib.
class MyClass2
{
public:
	/// \brief Print useful information.
	void Foo()
	{
		std::cout << "MyClass2::Foo()" << std::endl;
	}
	
	/// \brief Perform an even more interesting computation.
	/// \param baz Number on which to run the computation.
	/// \return Result of the computation.
	float Bar(float baz)
	{
		return baz * foo;
	}
	
private:
	float foo;
};
}
