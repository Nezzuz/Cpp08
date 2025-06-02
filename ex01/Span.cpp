#include "Span.hpp"

Span::Span(unsigned int N) : N(N) {}

Span::~Span() {}

void				Span::addNumber(unsigned int num)
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

template <typename T>
static inline unsigned int	countVecElements(const T& container)
{
	unsigned int	i;

	i = 0;
	while (container[i])
		i++;
	return (i);	
}

unsigned int			Span::getIntervals(std::string parameter)
{
	unsigned int	i;

	i = 0;
	vec_max = coutVecElements(this->vec);
	while (i < vec_max)
	{
		if (this->vec[i] && this->vec[i + 1])
		{
			if (this->vec[i] >= this->vec[i + 1])
				this->intervals.push_back(this->vec[i] - this->vec[i + 1]);
			else
				this->intervals.push_back(this->vec[i + 1] - this->vec[i]);
		}	
		i++;
	}
	return (shortAndReturn(parameter));
}

unsigned int			Span::shortestSpan(void)
{
	unsigned int	i;

	i = 0;
	while (this->vec[i])
		i++;
	if (i < 2)
		throw(runtime_error("There must be at least 2 numbers in the vector"));
	return (getIntervals("short"));
}

unsigned int			Span::longestSpan(void)
{
	unsigned int	i;

	i = 0;
	while (this->vec[i])
		i++;
	if (i < 2)
		throw(runtime_error("There must be at least 2 numbers in the vector"));
	return (getIntervals("long"));

}

