//
// Created by Chip Collier on 27.03.23.
//

#include "example.h"

Example::Example(int const foo)
	: foo(foo)
{

}

int Example::GetFoo() const
{
	return foo;
}
