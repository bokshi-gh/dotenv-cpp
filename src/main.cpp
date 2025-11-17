#include "dotenv.hpp"
#include <string>
#include <iostream>

int main (int argc, char *argv[]) {
	dotenv::init();
	std::string API_KEY = dotenv::getenv("API_KEY");
	std::cout << API_KEY << "\n";
	return 0;
}
