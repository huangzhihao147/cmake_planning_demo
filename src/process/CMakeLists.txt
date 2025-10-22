project(process)

add_library(
    ${PROJECT_NAME}
    SHARED
    process.cpp
)

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    ${Pnc_Map_Dir}
)
target_link_libraries(
    ${PROJECT_NAME}
    PUBLIC
    pnc_map
)

# src/process/CMakeLists.txt
target_include_directories(process
    PUBLIC ${EIGEN3_INCLUDE_DIRS}
)

# target_link_libraries(${PROJECT_NAME}
# PUBLIC
# Eigen3::Eigen
# )
