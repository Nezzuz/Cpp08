#pragma once

#include <iostream>
#include <vector>

template <typename T>
bool	easyfind(const T& container, int num)
{
	int	i;

	i = 0;
	while (container[i])
	{
		if (container[i] == num)
			return (true);
		i++;	
	}
	return (false);
}

