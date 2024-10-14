cmake_minimum_required(VERSION 3.10)

project(FinanceTracker)

set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(include)

# Specify all your source files here
set(SOURCES
    src/main.cpp
    src/LinkedList.cpp
    src/Transaction.cpp
    src/BST.cpp
    src/FinanceTracker.cpp
    src/Account.cpp
    # Add other .cpp files as needed
)

# Create the executable
add_executable(FinanceTracker ${SOURCES})
