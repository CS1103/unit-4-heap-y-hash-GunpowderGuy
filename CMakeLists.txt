cmake_minimum_required(VERSION 3.10.2)
project(poo2_unit5_week7)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/${OUTPUT_DEBUG})
if(UNIX AND NOT APPLE)
    set(CMAKE_CXX_FLAGS -pthread)
endif()

add_executable(poo2_unit5_week7
    main.cpp
    test_1_1.cpp
    test_1_2.cpp
    test_1_3.cpp
    test_1_4.cpp
    test_2_1.cpp
    test_2_2.cpp
    test_2_3.cpp
    test_2_4.cpp
    test_3_1.cpp
    test_3_2.cpp
    test_3_3.cpp
    test_3_4.cpp
    test_4_1.cpp
    test_4_2.cpp
    test_4_3.cpp
    test_4_4.cpp
    test_5_1.cpp
    test_5_2.cpp
    test_5_3.cpp
    test_5_4.cpp
    test_6_1.cpp
    test_6_2.cpp
    test_6_3.cpp
    test_6_4.cpp
    p1.h p1.cpp
    p2.h p2.cpp
    p3.h p3.cpp
    p4.h p4.cpp
    p5.h p5.cpp
    p6.h p6.cpp
    crisscross_pairs.h
    have_same_elements.h
    top_distance.h
    median.h
    find_min_subtext.h find_min_subtext.cpp
    remove_duplicates.h
)

configure_file(test_1_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_1_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_1_3.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_1_4.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_2_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_2_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_2_3.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_2_4.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_3_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_3_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_3_3.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_3_4.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_4_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_4_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_4_3.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_4_4.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_5_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_5_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_5_3.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_5_4.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_6_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_6_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_6_3.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_6_4.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
