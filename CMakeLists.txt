cmake_minimum_required(VERSION 3.0.0)
project(cpp_primer VERSION 0.1.0)

set (CMAKE_CXX_STANDARD 11)
include(CTest)
enable_testing()

# add_executable(main Chap12/solutions/12-26.cc Chap12/solutions/StrBlob.cc)
add_executable(text_search Chap12/solutions/12-27/main.cc Chap12/solutions/12-27/TextQuery.cc)
# add_executable(main Chap12/12-2-2.cc)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
