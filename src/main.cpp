#include <print>
#include "range_formatter.h"
#include <array>
int main(){
	auto array = std::array<int, 10>{1, 2, 3, 4, 5};
	std::println("{}", array);
	return 0;
}
