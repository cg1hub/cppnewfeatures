#include <iostream>
import cv;
import threewaycomparision;
import InitRangeBasedFor;

int main(int, char**) {
    std::cout << "helloJim" << std::endl;
    getDesignatedInitializer();
    ThreeWayComparision::Run();
    InitRangeBasedFor::Run();
    return 0;
}