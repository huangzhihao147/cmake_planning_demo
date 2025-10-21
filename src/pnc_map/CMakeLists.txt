project(pnc_map)

add_library(
    ${PROJECT_NAME}
    SHARED
    pnc_map.cpp
)

# ✅ 正确：暴露头文件目录
target_include_directories(${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)