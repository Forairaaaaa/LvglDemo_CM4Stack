cmake_minimum_required(VERSION 3.0.0)
project(play VERSION 0.1.0)


include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
)


# tick
add_library(tick tick.c)

# lvgl
add_subdirectory(lvgl)
add_subdirectory(lv_porting)

# app
file(GLOB APP_SRCS 
    app/ui/*.c
)
include_directories(app/ui)


add_executable(play main.cpp ${APP_SRCS})
target_link_libraries(play
    lvgl
    lvgl_porting
    lvgl_examples
    lvgl_demos
    tick
    pthread
)


add_custom_command(TARGET play
    POST_BUILD
    COMMAND /home/parker/projects/CM4/LvglTemplate_CM4/copy.sh
)