#pragma once
template <typename T>

class MyMath
{
public:
	T a;
	T b;

	MyMath(T a, T b) : a(a), b(b) {}

	T Min();
};

template<typename T>
inline T MyMath<T>::Min()
{
	if (a >= b) {
		return static_cast<T>(a);
	}
	else if (a < b) {
		return static_cast<T>(b);
	}
}