//
// Created by Chip Collier on 27.03.23.
//

#include "example.h"

Example::Example(int const foo)
{
	data.set_name("John Doe");
	data.set_foo(foo);
	data.set_bar(foo + foo);
}

int Example::GetFoo() const
{
	return data.foo();
}

int Example::GetBar() const
{
	return data.bar();
}

std::string Example::GetName() const
{
	return data.name();
}
