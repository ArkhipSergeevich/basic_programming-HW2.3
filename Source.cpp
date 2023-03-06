#include <iostream>
#include <string>
struct adress
{
	std::string country;
	std::string city;
	std::string street;
	std::string home_number;
	int flat_number;
	int index;
};
void output_function(adress& country1, adress& city1, adress& street1, adress& home_number1, adress& flat_number1, adress& index1)
{
	std::cout << "Ваш адрес:" << std::endl;
	std::cout << country1.country << " " << city1.city << " " << street1.street << " " << home_number1.home_number << " " << flat_number1.flat_number << " " << index1.index << std::endl;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	adress first = { "Russia", "Moscow", "Arbat", "3a", 10, 29387 };
	output_function(first, first, first, first, first, first);
}



