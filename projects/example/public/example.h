//
// Created by Chip Collier on 27.03.23.
//

#pragma once

#include "Example.pb.h"

class Example
{
	ExampleData data;
public:
	Example(int foo);

	[[nodiscard]]
	std::string const& GetName() const;

	[[nodiscard]]
	int GetFoo() const;

	[[nodiscard]]
	int GetBar() const;
};
