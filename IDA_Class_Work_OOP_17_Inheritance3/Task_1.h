#pragma once
#include <vector>
#include <string>
#include "Service functions.h"


class I_Printable
{

public:
	virtual void Print() const = 0;
	//I_Printable() = delete;
	//~I_Printable() = delete;
};



class A : virtual public I_Printable
{
//private:
	int var;
public:
	A() = default;
	virtual ~A() {}
	//~A() {}
	void Print() const override
	{
		std::cout << "var: " << var;
	}
};




class B : public A
{
//private:

public:
	~B() override {};
};

class C
{
	//private:
	int var;
public:
	C() = delete;
	//virtual C(int a) : var(a) {}
	
};

class D : public C
{
	//private:

public:
	//~D(int a) override {}

};
