#include <iostream>
import cv;
import threewaycomparision;
import InitRangeBasedFor;
// import NestedInlineNamespaces;
import ConstInit;
import ConceptsLibrary;

int main(int, char**) {
    std::cout << "helloJim" << std::endl;
    getDesignatedInitializer();
    ThreeWayComparision::Run();
    InitRangeBasedFor::Run();
    // InlineNamespaces::Run();
    ConstInit::Run();
    ConceptsLibrary::Run();
    return 0;
}