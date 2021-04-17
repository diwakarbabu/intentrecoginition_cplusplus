set(GTEST_SHUFFLE 1)

add_executable(
    output_test
    main.cpp
    test.cpp
    ../app/function.cpp
)

target_include_directories(
  output_test PUBLIC 
  ../vendor/googletest/googletest/include
  ${CMAKE_SOURCE_DIR}/include
)
target_link_libraries(output_test PUBLIC gtest)