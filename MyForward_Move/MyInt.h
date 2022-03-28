#pragma once
#include <iostream>
#include <string>
#include <fstream>

class MyInt {
private:
    int value;
public:
    MyInt() : value(999) {}
    MyInt(int value_) : value(value_) {}
    MyInt(const MyInt& other) : value(other.value){}
    MyInt(MyInt&& other) noexcept {
        value = other.value;
        other.value = 14;
    }
    MyInt(const MyInt&& other) noexcept {
        value = other.value;
    }

    MyInt& operator=(const MyInt& other) {
        value = other.value;
        return *this;
    }

    MyInt& operator+=(const MyInt& other) {
        value += other.value;
        return *this;
    }

    MyInt& operator-=(const MyInt& other) {
        value -= other.value;
        return *this;
    }

    MyInt& operator*=(const MyInt& other) {
        value *= other.value;
        return *this;
    }

    MyInt& operator/=(const MyInt& other) {
        if (other.value == 0) {
            std::cout << "ERROR: division by 0" << std::endl;
            return *this;
        }

        value /= other.value;
        return *this;
    }

    /*MyInt& operator%=(const MyInt& other) {
        if (other.value == 0) {
            std::cout << "ERROR: % by 0" << std::endl;
            return *this;
        }

        value %= other.value;
        return *this;
    }

    const MyInt operator+(const MyInt& other) const {

        return MyInt(value + other.value);
    }

    const MyInt operator-(const MyInt& other) const {
        return MyInt(value - other.value);
    }

    const MyInt operator*(const MyInt& other) const {
        return MyInt(value * other.value);
    }

    const MyInt operator/(const MyInt& other) const {
        if (other.value == 0) {
            std::cout << "ERROR: division by 0" << std::endl;
            exit(1);
        }
        return MyInt(value / other.value);
    }

    const MyInt operator%(const MyInt& other) const {
        if (other.value == 0) {
            std::cout << "ERROR: % by 0" << std::endl;
            exit(1);
        }

        return MyInt(value % other.value);
    }

    const MyInt operator+() {
        return *this;
    }

    const MyInt operator-() {
        return MyInt(-value);
    }

    const MyInt& operator++() {
        value += 1;
        return *this;
    }

    const MyInt operator++(int) {
        MyInt old_value(value);
        value += 1;
        return old_value;
    }

    const MyInt& operator--() {
        value -= 1;
        return *this;
    }

    const MyInt operator--(int) {
        MyInt old_value(value);
        value -= 1;
        return old_value;
    }

    bool operator==(const MyInt& other) {
        return value == other.value;
    }

    bool operator!=(const MyInt& other) {
        return value != other.value;
    }

    bool operator>=(const MyInt& other) {
        return value >= other.value;
    }

    bool operator<=(const MyInt& other) {
        return value <= other.value;
    }

    bool operator>(const MyInt& other) {
        return value > other.value;
    }

    bool operator<(const MyInt& other) {
        return value < other.value;
    }
    */
    int GetValue() const {
        return value;
    }

    friend std::ostream& operator<< (std::ostream& out, const MyInt& point);
};

std::ostream& operator<< (std::ostream& out, const MyInt& value)
{
    out << value.value;
    return out;
}