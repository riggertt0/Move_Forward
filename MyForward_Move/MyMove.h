#pragma once
#include <iostream>

template <class T>
typename std::remove_reference<T>::type&& MyMove(T&& arg) {
    return static_cast<typename std::remove_reference<T>::type&&>(arg);
}

template<class T>
T&& MyForward(T& arg)
{
    return static_cast<T&&>(arg);
}