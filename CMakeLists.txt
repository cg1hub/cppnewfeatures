cmake_minimum_required (VERSION 3.8)

project ("cppnewfeatures")

add_subdirectory("cpp20")

add_executable(cppnewfeatures main.cpp)
target_link_libraries(cppnewfeatures cpp20)
include_directories( 
  ./cpp20
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cppnewfeatures PROPERTY CXX_STANDARD 20)
endif()