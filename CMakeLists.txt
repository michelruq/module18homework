cmake_minimum_required(VERSION 3.5)

project(module18)

include_directories(./message)
include_directories(./user)

set(SRC_LIST 
          main.cpp 
          ./message/message.cpp
          ./user/user.cpp)

add_executable(${PROJECT_NAME} ${SRC_LIST})

set(CXX_FLAGS "${CXX_FLAGS} -std=c++17 -Wall")