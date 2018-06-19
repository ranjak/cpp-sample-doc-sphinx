#include <iostream>

namespace MyLib
{
/// \brief MyClass is the main class in MyLib.
///
///
///
class MyClass
{
public:
	/// \brief Print awesome things to the screen.
	void Foo()
	{
		std::cout << "MyClass::Foo()" << std::endl;
	}
	
	/// Perform a complex computation.
	/// \param baz The number on which the computation should be made.
	/// \return The result of the computation.
	int Bar(int baz)
	{
		return baz * foo;
	}
	
private:
	int foo;
};
}
