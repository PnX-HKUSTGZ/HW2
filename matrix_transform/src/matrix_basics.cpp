#include "matrix_transform/matrix_basics.hpp"
#include <stdexcept>
#include <iostream>

namespace matrix_transform {

Eigen::MatrixXd MatrixBasics::add(
  const Eigen::MatrixXd& matrix1,
  const Eigen::MatrixXd& matrix2)
{
  // TODO: 使用 Eigen 进行矩阵加法
  // 提示：直接使用 + 运算符即可
  // 例如：result = matrix1 + matrix2;
  
  throw std::runtime_error("Function not implemented!");
}

Eigen::MatrixXd MatrixBasics::multiply(
  const Eigen::MatrixXd& matrix1,
  const Eigen::MatrixXd& matrix2)
{
  // TODO: 使用 Eigen 进行矩阵乘法
  // 提示：直接使用 * 运算符即可
  // 注意：Eigen 会自动检查维度是否匹配
  
  throw std::runtime_error("Function not implemented!");
}

Eigen::MatrixXd MatrixBasics::transpose(const Eigen::MatrixXd& matrix)
{
  // TODO: 使用 Eigen 的转置功能
  // 提示：调用 .transpose() 方法
  // 例如：result = matrix.transpose();
  
  throw std::runtime_error("Function not implemented!");
}

double MatrixBasics::determinant(const Eigen::MatrixXd& matrix)
{
  // TODO: 使用 Eigen 计算行列式
  // 提示：调用 .determinant() 方法
  // 注意：需要先检查是否为方阵
  // 使用 matrix.rows() 和 matrix.cols() 获取维度
  
  throw std::runtime_error("Function not implemented!");
}

} // namespace matrix_transform