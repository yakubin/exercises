#include <iostream>

extern const char str[];

int main() {
	std::cout << str << "R\"(" << str << ")\";" << std::endl;
}

const char str[] =
R"(#include <iostream>

extern const char str[];

int main() {
	std::cout << str << "R\"(" << str << ")\";" << std::endl;
}

const char str[] =
)";
