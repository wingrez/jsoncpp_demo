#include <iostream>
#include "json/json.h"

int main() {
    Json::Value point;

    point["x"] = 10;
    point["y"] = 8;

    std::cout << point << std::endl;

    return 0;
}