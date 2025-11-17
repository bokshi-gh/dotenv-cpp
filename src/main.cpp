#include "../include/dotenv.hpp"
#include <iostream>

int main (int argc, char *argv[]) {
	dotenv::init();
	std::cout << dotenv::getenv("API_KEY") << "\n";

	return 0;
}
