cmake_minimum_required(VERSION 3.8)
project(matrix_transform)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 设置C++标准
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 查找Eigen库
find_package(Eigen3 REQUIRED)

# 添加头文件路径
include_directories(
  includes
  ${EIGEN3_INCLUDE_DIR}
)

# 添加库目标
add_library(${PROJECT_NAME}
  src/matrix_basics.cpp
  src/rotation.cpp
  src/transform.cpp
)

# 链接Eigen
target_link_libraries(${PROJECT_NAME}
  Eigen3::Eigen
)


install(TARGETS ${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(DIRECTORY includes/
  DESTINATION include
)