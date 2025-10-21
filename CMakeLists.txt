cmake_minimum_required(VERSION 3.20.0)
project(
    planning
    VERSION 0.0.1
    DESCRIPTION "cmake_planning demo"
    HOMEPAGE_URL "https://github.com/huangzhihao147/cmake_planning_demo"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

# 变量设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(Pnc_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)

# 添加子目录
add_subdirectory(src)
