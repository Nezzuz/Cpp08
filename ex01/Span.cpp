#include "Span.hpp"

Span::Span(unsigned int N) : N(N) {}

Span::~Span() {}

Span::addNumber(unsigned int num)
{
	int	i;

	i = 0;
	while (this->vec[i])
		i++;
	if (i > this->N)
		throw (std::out_of_range("Out of range. The vector of numbers it's full"));
	else
		this->vec.push_back(num);

}

Span::shortestSpan()
{

}

Span::longestSpan()
{

}

