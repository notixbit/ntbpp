cmake_minimum_required(VERSION 2.6)

project(ntbpp)

set(CMAKE_CXX_STANDARD 17)

install(FILES
        notixbit.h
        DESTINATION include/notixbit/ntbpp)

install(DIRECTORY
        colors
        templates
        types
        DESTINATION include/notixbit/ntbpp)
