#pragma once

#include <iostream>
#include <vector>

template<class T, class K>
std::istream& operator>>(std::istream& is, std::pair<T,K>& v)
{
	is >> v.first >> v.second;
	return is;
}

template <class Value>
std::istream& operator>>(std::istream& is, std::vector<Value>& v)
{
	unsigned long v_size;
	is >> v_size;
	v.resize(v_size);
	for (int i=0; i<v.size(); i++)
		is >> v[i];
	return is;
}

template <class Value>
std::ostream& operator<<(std::ostream& os, const std::vector<Value>& v)
{
	for(int i=0; i<v.size(); i++)
		os << v[i] << (((i==(v.size()-1))) ? "" : " ");
	return os;
}

template <class Value>
std::vector<Value> parseVector(std::istream& is, unsigned long count=0)
{
	std::vector<Value> ret={};
	if (count == 0)
		is >> ret;
	else
	{
		ret.resize(count);
		for (int i=0; i<count; i++)
			is >> ret[i];	
	}
	return ret;
}

template <class Value>
Value parse(std::istream& is)
{
	Value v;
	is >> v;
	return v;	
}
