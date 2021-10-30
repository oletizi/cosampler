#include <iostream>
//#include "config.hpp"
#include "Mpc.hpp"

int main() {
    mpc::Mpc mpc = mpc::Mpc();
    mpc.init(44100, 2, 2);

    std::cout << "Hello, World!" << std::endl;
  //  printf("Version: %d.%d", osampler_VERSION_MAJOR, osampler_VERSION_MINOR);
    return 0;
}