#include <iostream>
#include <string>


int main(int argc, char** argv)
{
	std::string userMessage;

	std::cout << "Enter Message:\n";

	std::getline(std::cin, userMessage);

	std::cout << "User Message: " << userMessage << "\n";

	return 0;
}
