#include <iostream>
#include "config.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    printf("Version: %d.%d", osampler_VERSION_MAJOR, osampler_VERSION_MINOR);
    return 0;
}