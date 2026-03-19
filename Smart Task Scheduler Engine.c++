#pragma once
#include <functional>
#include <string>

struct Task {
    std::string name;
    int priority;
    std::function<void()> action;

    bool operator<(const Task& other) const {
        return priority < other.priority; // higher = more important
    }
};
