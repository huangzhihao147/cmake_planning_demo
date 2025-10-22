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

# 三方库
set(EIGEN3_INCLUDE_DIR "D:/eigen-3.3.8")

# list(APPEND CMAKE_MODULE_PATH "${EIGEN3_INCLUDE_DIR}/cmake")
# message("CMAKE_MODULE_PATH= ${CMAKE_MODULE_PATH}")
# find_package(Eigen3 3.3.8 REQUIRED)

# if(TARGET Eigen3::Eigen)
# message(STATUS "********** Found Eigen3: ${Eigen3_DIR}***********")
# else()
# message(STATUS "✨ Created Eigen3::Eigen targeting D:/eigen-3.3.8")
# endif()
# 添加 Eigen 头文件路径到全局
include_directories(${EIGEN3_INCLUDE_DIR})

# 添加子目录
add_subdirectory(src)
