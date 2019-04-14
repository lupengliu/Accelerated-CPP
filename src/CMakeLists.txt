PROJECT(CMAKE_TEST)

INCLUDE_DIRECTORIES(../inc)

SET(SRC_LIST test.cc
	foo.cc
	chapter_3.cc
)

ADD_EXECUTABLE(cmake_test ${SRC_LIST})


