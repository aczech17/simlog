#pragma once
#include <array>

template <unsigned inputCount, unsigned outputCount>
class Element
{
protected:
	std::array <bool, inputCount> inputs;
	std::array <bool, outputCount> outputs;

	virtual void setOutputs() = 0;
	Element()
	{
		for (auto i = inputs.begin(); i != inputs.end(); i++)
			*i = false;
	}
public:
	void setInput(unsigned inputNumber, bool value)
	{
		if (inputNumber > inputCount)
			throw (std::logic_error("input number too high"));
		
		inputs[inputNumber] = value;
	}

	bool getOutput(unsigned outputNumber)
	{
		if (outputNumber > outputCount)
			throw(std::logic_error("output number too high"));

		setOutputs();
		return outputs[outputNumber];
	}
};