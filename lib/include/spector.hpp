#pragma once

template <class Container, class SpectorContainer>
SpectorContainer spector(const Container& container, SpectorContainer& previous_spector)
{
	auto ret = previous_spector;
	for(const auto& value: container)
		ret[value]++;
	return ret;
}

template <class Container, class SpectorContainer>
SpectorContainer spector(const Container& container)
{
	SpectorContainer ret;
	for(const auto& value: container)
		ret[value]++;
	return ret;
}
