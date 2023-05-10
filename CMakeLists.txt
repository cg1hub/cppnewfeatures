cmake_minimum_required (VERSION 3.8)

project ("cppnewfeatures")

add_subdirectory("cpp20")

add_executable(cppnewfeatures main.cpp)
target_link_libraries(cppnewfeatures cpp20)
include_directories( 
  ./cpp20
)

target_compile_features(cppnewfeatures PUBLIC cxx_std_23)