#pragma once
#ifndef MAX_LIST_H
#define MAX_LIST_H

#include <iostream>
	template<typename T>
	T maximum(const T* a, int n);

	template<typename T>
	T maximum(const T* a, int n)
	{
		if (n <= 0) {
			std::cout << "数组元素小于0" << std::endl;
			return *a;
		}
		T max = a[0];
		for (int i = 0; i < n; i++)
		{
			if (max < a[i])
				max = a[i];
		}
		return max;
	}
	//此处只针对本题目，设计一个简单的完成作业的函数，不具备强健性
	template<typename T>
	void InputData(T* a, int n);

	template<typename T>
	void InputData(T* a, int n) {
		for (int i = 0; i < n; i++)
		{
			std::cin >> a[i];
		}
	}
#endif // !MAX_LIST_H
