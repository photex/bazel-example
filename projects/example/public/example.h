//
// Created by Chip Collier on 27.03.23.
//


#pragma once

#include "Example.pb.h"

class Example
{
	int foo = 0;
public:
	Example(int const foo);

	[[nodiscard]]
	int GetFoo() const;
};
