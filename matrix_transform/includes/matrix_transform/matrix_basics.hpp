#ifndef MATRIX_BASICS_HPP_
#define MATRIX_BASICS_HPP_

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

namespace matrix_transform {

/**
 * @brief 基础矩阵运算类
 * 本类包含基础的矩阵运算实现，帮助理解矩阵运算的基本原理
 */
class MatrixBasics {
public:
  /**
   * @brief 矩阵加法
   * @param matrix1 第一个矩阵
   * @param matrix2 第二个矩阵
   * @return 两个矩阵的和
   */
  static Eigen::MatrixXd add(const Eigen::MatrixXd& matrix1, const Eigen::MatrixXd& matrix2);

  /**
   * @brief 矩阵乘法
   * @param matrix1 第一个矩阵
   * @param matrix2 第二个矩阵
   * @return 两个矩阵的乘积
   * @note 请手动实现矩阵乘法，不要直接使用 Eigen 的运算符
   */
  static Eigen::MatrixXd multiply(const Eigen::MatrixXd& matrix1, const Eigen::MatrixXd& matrix2);

  /**
   * @brief 矩阵转置
   * @param matrix 输入矩阵
   * @return 转置后的矩阵
   * @note 请手动实现矩阵转置，不要直接使用 Eigen 的转置函数
   */
  static Eigen::MatrixXd transpose(const Eigen::MatrixXd& matrix);

  /**
   * @brief 计算矩阵的行列式
   * @param matrix 输入方阵
   * @return 行列式值
   * @note 请手动实现 2x2 和 3x3 矩阵的行列式计算
   */
  static double determinant(const Eigen::MatrixXd& matrix);
};

} // namespace matrix_transform

#endif // MATRIX_BASICS_HPP_