# C添加所有源文件和头文y(./src SRC_DIR)件
include_directories(./include)
aux_source_directory(./src SRC_DIR)
# set(EXTRA_SRC )

# 添加target
add_executable(pmcopy ${SRC_DIR})
# 链接依赖库
target_link_libraries(pmcopy SDL2 avformat avcodec avutil)
