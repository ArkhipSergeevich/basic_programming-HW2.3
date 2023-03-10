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
void output_function(const adress& adress) 
{
	std::cout << "Ваш адрес:" << std::endl;
	std::cout << adress.country << " " << adress.city << " " << adress.street << " " << adress.home_number << " " << adress.flat_number << " " << adress.index << std::endl;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	const adress first = { "Russia", "Moscow", "Arbat", "3a", 10, 29387 };
	output_function(first); 
}



