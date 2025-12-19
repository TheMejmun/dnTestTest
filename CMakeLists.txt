set(NAME dnTestTest)

cmake_minimum_required(VERSION 4.0)
project(${NAME})

set(CMAKE_CXX_STANDARD 20)

# Optional: Enable dnLog. dnTest will automatically link it
#add_subdirectory(external/dnScheduler)
#add_subdirectory(external/dnLog)

add_subdirectory(external/dnTest)
# Add the test sources to the test executable
target_sources(execDnTest PRIVATE source/math.cpp)