#include "Element.h"
#include "And.h"
#include "Or.h"
#include "Not.h"

#include <iostream> //debug

int main()
{
	Not n(false);

	std::cout << n.getOutput() << std::endl;
}