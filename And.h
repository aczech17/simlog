#pragma once
#include "Element.h"

template <unsigned inputCount>
class And : public Element <inputCount, 1>
{
	typedef Element<inputCount, 1> element;
	using Element<inputCount, 1>::inputs;
	using Element<inputCount, 1>::outputs;

	void setOutputs() override
	{
		for (auto i = inputs.begin(); i != inputs.end(); i++)
			if (*i == false)
			{
				outputs[0] = false;
				return;
			}
		outputs[0] = true;
	}
public:
	And() { }

	bool getOutput()
	{
		return element::getOutput(0);
	}
};

