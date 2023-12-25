#pragma once

#include <iostream> // открыли портал

double sum(double num1, double num2); //прототип функции
void prime_range(int left, int right); //функция простые числа в диапазоне

template <typename T>
void print_arr(T arr[], const int length)//создали шаблонную функцию 
{
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}