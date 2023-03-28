//
// Created by Chip Collier on 27.03.23.
//

#include "example.h"

Example::Example(int const foo)
{
	data.set_name("John Doe");
	data.set_foo(foo);
	data.set_bar(foo + foo);
	auto ser = data.SerializeAsString();
	assert(!ser.empty());
}

int Example::GetFoo() const
{
	return data.foo();
}

int Example::GetBar() const
{
	return data.bar();
}

std::string const& Example::GetName() const
{
	return data.name();
}

std::string Example::AsString() const
{
	return data.SerializeAsString();
}
