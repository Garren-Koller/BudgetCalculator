cmake_minimum_required(VERSION 3.9)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_executable(BudgetCalculator Calculator.h Expenses.h Income.h BudgetCalculator.cpp Calculator.cpp Expenses.cpp Income.cpp)