#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> vec(0);

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	if (easyfind(vec, 42) == true)
		std::cout << "The number was found in the container" << std::endl;
	else
		std::cout << "The number was not found" << std::endl;
	return (0);
}
