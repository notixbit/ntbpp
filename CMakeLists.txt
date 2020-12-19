cmake_minimum_required(VERSION 2.6)

project(ntbpp)

install(FILES
        notixbit.h
        DESTINATION include/notixbit/ntbpp)

install(DIRECTORY
        colors
        templates
        types
        DESTINATION include/notixbit/ntbpp)
