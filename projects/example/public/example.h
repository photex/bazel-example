//
// Created by Chip Collier on 27.03.23.
//

#pragma once

#include "Example.pb.h"

class Example
{
	ExampleData data;

public:
	Example(const Example&) = default;
	Example(Example&&) = default;
	Example& operator=(const Example&) = default;
	Example& operator=(Example&&) = default;
	Example(int foo);

	[[nodiscard]] std::string const& GetName() const;

	[[nodiscard]] int GetFoo() const;

	[[nodiscard]] int GetBar() const;

	[[nodiscard]] std::string AsString() const;
};
