#ifndef TRANSFORM_HPP_
#define TRANSFORM_HPP_

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Geometry>
namespace matrix_transform {

/**
 * @brief 坐标变换类
 * 实现坐标系之间的转换，理解相机、机器人等实际场景中的坐标变换
 */
class Transform {
public:
  /**
   * @brief 构造刚体变换矩阵
   * @param rotation 3x3旋转矩阵
   * @param translation 3x1平移向量
   * @return 4x4齐次变换矩阵
   */
  static Eigen::Matrix4d buildTransform(
    const Eigen::Matrix3d& rotation,
    const Eigen::Vector3d& translation);

  /**
   * @brief 将点从一个坐标系变换到另一个坐标系
   * @param point 原坐标系下的3D点
   * @param transform 从原坐标系到目标坐标系的变换矩阵
   * @return 目标坐标系下的3D点
   */
  static Eigen::Vector3d transformPoint(
    const Eigen::Vector3d& point,
    const Eigen::Matrix4d& transform);

  /**
   * @brief 计算两个坐标系之间的相对变换
   * @param from_frame 原坐标系在世界坐标系下的位姿
   * @param to_frame 目标坐标系在世界坐标系下的位姿
   * @return 从原坐标系到目标坐标系的变换矩阵
   */
  static Eigen::Matrix4d computeRelativeTransform(
    const Eigen::Matrix4d& from_frame,
    const Eigen::Matrix4d& to_frame);

  /**
   * @brief 将装甲板在相机坐标系下的位姿转换到世界坐标系
   * 这是自瞄中的实际应用例子
   * @param armor_in_camera 装甲板在相机坐标系下的位姿
   * @param camera_to_world 相机到世界坐标系的变换
   * @return 装甲板在世界坐标系下的位姿
   */
  static Eigen::Matrix4d transformArmorToWorld(
    const Eigen::Matrix4d& armor_in_camera,
    const Eigen::Matrix4d& camera_to_world);
};

} // namespace matrix_transform

#endif // TRANSFORM_HPP_