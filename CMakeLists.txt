cmake_minimum_required(VERSION 3.26)
project(QueueWithLinkedList)

set(CMAKE_CXX_STANDARD 17)

add_executable(QueueWithLinkedList main.cpp
        Node.h
        Queue.h
        Queue.tpp)
