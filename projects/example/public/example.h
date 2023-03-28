//
// Created by Chip Collier on 27.03.23.
//


#pragma once

#include "Example.pb.h"

class Example
{
	ExampleData data;
public:
	Example(int const foo);

	[[nodiscard]]
	std::string GetName() const;

	[[nodiscard]]
	int GetFoo() const;

	[[nodiscard]]
	int GetBar() const;
};
