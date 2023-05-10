#include <iostream>
import cv;
import threewaycomparision;
import InitRangeBasedFor;
// import NestedInlineNamespaces;
import ConstInit;

int main(int, char**) {
    std::cout << "helloJim" << std::endl;
    getDesignatedInitializer();
    ThreeWayComparision::Run();
    InitRangeBasedFor::Run();
    // InlineNamespaces::Run();
    ConstInit::Run();
    return 0;
}