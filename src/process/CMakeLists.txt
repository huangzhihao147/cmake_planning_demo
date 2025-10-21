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
target_link_directories(
    ${PROJECT_NAME}
    PUBLIC
    pnc_map
)

# ✅ 必须链接 pnc_map 库
target_link_libraries(${PROJECT_NAME} PRIVATE pnc_map)
