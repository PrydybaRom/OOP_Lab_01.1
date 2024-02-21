#pragma once

class FloatPower
{
private:
	double first;
	double second;
public:
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }
	void SetFirst(double value);
	void SetSecond(double value);
	bool Init(double first, double second);
	void Display() const;
	void Read();
	void Power();
};