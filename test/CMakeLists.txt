set(TEST test)

enable_testing()

add_executable(${TEST}
	hello_test.cpp
	)

find_package(GTest REQUIRED)

target_link_libraries(${TEST} PRIVATE
	GTest::gtest_main
	)

include(GoogleTest)
gtest_discover_tests(${TEST})
