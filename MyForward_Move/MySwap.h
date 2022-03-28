#pragma once
#include "MyMove.h"

template <class T>
void MySwap(T& value_first, T& value_second) {
	T assistant = value_first;
	value_first = value_second;
	value_second = assistant;
}

template <class T>
void MovingSwap(T& value_first, T& value_second) {
	T assistant = MyMove(value_first);
	value_first = MyMove(value_second);
	value_second = MyMove(assistant);
}