#pragma once

#include <iostream>
#include <vector>

class Span
{
	private:
		unsigned int			N;
		std::vector<unsigned int>	vec;
		std::vector<unsigned int>	intervals;

	public:
		Span(unsigned int N);
		Span(const Span& copy);
		const Span& operator = (const Span& copy);
		~Span();
		void		addNumber(unsigned int num);		
		unsigned int	getIntervals(const std::string& parameter);
		unsigned int	shortAndReturn(const std::string& parameter);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
};

