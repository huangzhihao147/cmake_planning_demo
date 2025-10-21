project(planning_main)
add_subdirectory(pnc_map)
add_subdirectory(process)

add_executable(${PROJECT_NAME} planning_main.cpp)

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    ${Process_Dir}
)

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    ${Pnc_Map_Dir}
)

target_link_directories(
    ${PROJECT_NAME}
    PUBLIC
    process
)

# ✅ 必须链接 process 库
target_link_libraries(planning_main PRIVATE process)