#include "matrix_transform/transform.hpp"

namespace matrix_transform {

Eigen::Matrix4d Transform::buildTransform(
  const Eigen::Matrix3d& rotation,
  const Eigen::Vector3d& translation)
{
  // TODO: 构建 4x4 齐次变换矩阵
  // 提示：齐次变换矩阵的结构：
  // [ R R R t ]
  // [ R R R t ]
  // [ R R R t ]
  // [ 0 0 0 1 ]
  // 其中 R 是 3x3 旋转矩阵，t 是 3x1 平移向量
  //
  // 示例代码框架：
  // Eigen::Matrix4d T = Eigen::Matrix4d::Identity();
  // T.block<3,3>(0,0) = rotation;     // 左上角3x3是旋转
  // T.block<3,1>(0,3) = translation;  // 右上角3x1是平移
  // return T;
  
  throw std::runtime_error("Function not implemented!");
}

Eigen::Vector3d Transform::transformPoint(
  const Eigen::Vector3d& point,
  const Eigen::Matrix4d& transform)
{
  // TODO: 将 3D 点通过齐次变换矩阵进行变换
  // 提示1：需要先将 3D 点转为齐次坐标（4D），最后一维为 1
  // 提示2：变换后再转回 3D 坐标
  //
  // 示例代码框架：
  // Eigen::Vector4d point_homogeneous;
  // point_homogeneous << point, 1.0;  // 转为齐次坐标
  // 
  // Eigen::Vector4d transformed = transform * point_homogeneous;
  // 
  // return transformed.head<3>();  // 取前3维
  
  throw std::runtime_error("Function not implemented!");
}

Eigen::Matrix4d Transform::computeRelativeTransform(
  const Eigen::Matrix4d& from_frame,
  const Eigen::Matrix4d& to_frame)
{
  // TODO: 计算从 from_frame 到 to_frame 的相对变换
  // 提示：T_relative = T_to^(-1) * T_from
  // 
  // Eigen 中求逆矩阵：使用 .inverse() 方法
  // 例如：Eigen::Matrix4d inv_to = to_frame.inverse();
  
  throw std::runtime_error("Function not implemented!");
}

Eigen::Matrix4d Transform::transformArmorToWorld(
  const Eigen::Matrix4d& armor_in_camera,
  const Eigen::Matrix4d& camera_to_world)
{
  // TODO: 将装甲板从相机坐标系转换到世界坐标系
  // 这是自瞄中的实际应用：
  // - armor_in_camera: 装甲板在相机坐标系下的位姿（由 PnP 求解得到）
  // - camera_to_world: 相机到世界坐标系的变换（由 TF2 提供）
  // 
  // 提示：变换链的复合就是矩阵乘法
  // armor_in_world = camera_to_world * armor_in_camera
  
  throw std::runtime_error("Function not implemented!");
}

} // namespace matrix_transform