CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
PROJECT(LogExtractor C CXX)

SET(src_dir ${PROJECT_SOURCE_DIR}/src)
FILE(GLOB src_codes ${src_dir}/*.cpp)

ADD_EXECUTABLE(LogExtractor ${src_codes})