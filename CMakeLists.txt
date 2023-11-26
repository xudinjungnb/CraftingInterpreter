# 设置项目名称
project(CraftingInterpreter)

# 指定最低的CMake版本
cmake_minimum_required(VERSION 3.10)

# 指定可执行文件的输出路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# 添加要编译的源文件
file(GLOB SOURCES "src/*.c")

# 设置编译选项
set(CMAKE_C_STANDARD 99)

# 添加头文件搜索路径
include_directories(src)
# include_directories(thirdparty_library/include)

# 生成可执行文件
add_executable(CraftingInterpreter ${SOURCES})