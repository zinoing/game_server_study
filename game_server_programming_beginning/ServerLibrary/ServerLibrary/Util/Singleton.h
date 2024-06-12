#pragma once
#include "stdafx.h"

template<typename T>
class Singleton {
protected:
	Singleton() {}
	~Singleton() {}

public:
	Singleton(const Signelton&);
	Singleton& operator= (const Signleton&);

	static T& getInstance() {
		static T instance;
		return Instance;
	}
};