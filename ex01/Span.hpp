#pragma once

#include <iostream>
#include <vector>

class Span
{
	private:
		unsigned int			N;
		std::vector<unsigned int>	vec(0);
		std::vector<unsigned int>	intervals(0);

	public:
		Span(unsigned int N);
		~Span();
		void		addNumber(unsigned int num);		
		unsigned int	getIntervals(std::string parameter)
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
};

