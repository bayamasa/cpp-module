#include <limits>
#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::numeric_limits<int>::max() +1  << std::endl
              << std::numeric_limits<int>::min() << std::endl;
			  return 0;
}
