#ifndef ROTATION_HPP_
#define ROTATION_HPP_

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Geometry>

namespace matrix_transform {

/**
 * @brief 旋转表示与转换类
 * 本类包含各种旋转表示方法及其之间的转换
 */
class Rotation {
public:
  /**
   * @brief 欧拉角转旋转矩阵 (ZYX顺序)
   * @param roll X轴旋转角 (弧度)
   * @param pitch Y轴旋转角 (弧度)
   * @param yaw Z轴旋转角 (弧度)
   * @return 3x3旋转矩阵
   */
  static Eigen::Matrix3d eulerToRotMatrix(double roll, double pitch, double yaw);

  /**
   * @brief 旋转矩阵转欧拉角
   * @param rotMatrix 3x3旋转矩阵
   * @return Vector3d (roll, pitch, yaw)
   */
  static Eigen::Vector3d rotMatrixToEuler(const Eigen::Matrix3d& rotMatrix);

  /**
   * @brief 四元数转旋转矩阵
   * @param w 四元数实部
   * @param x 四元数虚部x
   * @param y 四元数虚部y
   * @param z 四元数虚部z
   * @return 3x3旋转矩阵
   */
  static Eigen::Matrix3d quaternionToRotMatrix(double w, double x, double y, double z);

  /**
   * @brief 旋转矩阵转四元数
   * @param rotMatrix 3x3旋转矩阵
   * @return Vector4d (w, x, y, z)
   */
  static Eigen::Vector4d rotMatrixToQuaternion(const Eigen::Matrix3d& rotMatrix);

  /**
   * @brief 角轴表示转旋转矩阵
   * @param angle 旋转角度 (弧度)
   * @param axis 旋转轴向量 (需要归一化)
   * @return 3x3旋转矩阵
   */
  static Eigen::Matrix3d angleAxisToRotMatrix(double angle, const Eigen::Vector3d& axis);
};

} // namespace matrix_transform

#endif // ROTATION_HPP_