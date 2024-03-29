//
// Created by Chip Collier on 27.03.23.
//

#include <fmt/format.h>

#include "example.h"

int main(int argc, char* argv[])
{
	int result = 0;

	Example example(10);

	fmt::print("Howdy!! Oh my goodness I used Xcode to write this text.\n");

	fmt::print("Example.name: {}\n", example.GetName());
	fmt::print("Example.foo: {}\n", example.GetFoo());
	fmt::print("Example.bar: {}\n", example.GetBar());

	auto buf = example.AsString();
	fmt::print("Example serialized is {} bytes long.\n", buf.size());

	return result;
}
