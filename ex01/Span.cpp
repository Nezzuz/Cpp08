#include "Span.hpp"

Span::Span(unsigned int N) : N(N) {}

Span::Span(const Span& copy)
{
	*this = copy;
}

const Span& Span::operator = (const Span& copy)
{
	if (this != &copy)
	{
		this->N = copy.N;		
		this->vec = copy.vec;
		this->intervals = copy.intervals;
	}
	return (*this);
}

Span::~Span() {}

void				Span::addNumber(unsigned int num)
{
	if (this->vec.size() > this->N)
		throw (std::out_of_range("Out of range. The vector of numbers it's full"));
	else
		this->vec.push_back(num);

}

unsigned int			Span::shortAndReturn(const std::string& parameter)
{
	unsigned int	tmp;
	unsigned int	i;
	
	tmp = this->intervals[0];
	i = 0;
	while (this->intervals[i])
	{
		if (parameter == "short")
		{
			if (tmp > this->intervals[i])
				tmp = this->intervals[i];
			i++;
		}
		else if (parameter == "long")
		{
			if (tmp < this->intervals[i])
				tmp = this->intervals[i];
			i++;
		}
	}
	return (tmp);
}

unsigned int			Span::getIntervals(const std::string& parameter)
{
	unsigned int	i;

	i = 0;
	while (i < this->vec.size())
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
	if (this->vec.size() < 2)
		throw(std::runtime_error("There must be at least 2 numbers in the vector"));
	return (getIntervals("short"));
}

unsigned int			Span::longestSpan(void)
{
	if (this->vec.size() < 2)
		throw(std::runtime_error("There must be at least 2 numbers in the vector"));
	return (getIntervals("long"));
}

