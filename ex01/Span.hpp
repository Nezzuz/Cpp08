#pragma once

#include <iostream>
#include <vector>

class Span
{
	private:
		unsigned int			N;
		std::vector<unsigned int>	vec(N);

	public:
		Span(unsigned int N);
		~Span();
		void		addNumber(unsigned int num);		
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};
