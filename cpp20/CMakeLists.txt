# version 3.11 or later of CMake or needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.11-3.18)

project(cpp20)

add_library(cpp20 DesignatedInitializers.ixx ThreewayComparision.ixx InitRangeBasedFor.ixx 
    InlineNamespaces.ixx ConstInit.ixx ConceptsLibrary.ixx FormatLibrary.ixx
    CoroutineLibrary.ixx)

# PUBLIC needed to make both hello.h and hello library available elsewhere in project
target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include)


# Tell compiler to use C++20 features
target_compile_features(cpp20 PUBLIC cxx_std_23)