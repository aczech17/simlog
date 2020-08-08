#pragma once
#include "Element.h"
class Not :public Element <1, 1>
{
	typedef Element<1, 1> element;
	using Element<1, 1>::inputs;
	using Element<1, 1>::outputs;

	void setOutputs() override
	{
		outputs[0] = !inputs[0];
	}
public:
	Not(bool val) { outputs[0] = val; }

	bool getOutput()
	{
		return element::getOutput(0);
	}
};

