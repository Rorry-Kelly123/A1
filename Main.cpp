#include "UUDate.h"
#include <string>
#include <iostream>

int main()
{
	UUDate test("28/09/1998");

	std::string date = "27/09/1998";
	date.erase(date.begin() + 2);
	date.erase(date.begin() + 4);

	std::cout << date << std::endl;

	int day_ = std::stoi(date.substr(0, 2));
	int month_ = std::stoi(date.substr(2, 2));
	int year_ = std::stoi(date.substr(4, date.length() - 4));

	std::cout << test.GetDay() << std::endl;
	std::cout << test.GetMonth() << std::endl;
	std::cout << test.GetYear() << std::endl;
	std::cout << test.GetDate() << std::endl;

	UUDate blank;
	return 0;
}