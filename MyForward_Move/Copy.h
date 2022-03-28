#pragma once
#include "MyInt.h"

class CopyClass {
public:
    CopyClass(size_t size) {
        for (size_t i = 0; i < size; ++i) {
            test_.push_back(rand() % 100);
        }
    }

    CopyClass(const CopyClass& other) {
        test_ = other.test_;
    }

    CopyClass(CopyClass&& other) noexcept {
        std::swap(other.test_, test_);
    }

    CopyClass& operator=(const CopyClass& other) {
        if (this == &other) {
            return *this;
        }

        test_ = other.test_;
        return *this;
    }

    CopyClass& operator=(CopyClass&& other) noexcept {
        if (this == &other) {
            return *this;
        }

        std::swap(other.test_, test_);
        return *this;
    }


private:
    std::vector<int> test_;
};