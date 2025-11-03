#include "matrix_transform/rotation.hpp"
#include <cmath>

namespace matrix_transform {

Eigen::Matrix3d Rotation::eulerToRotMatrix(double roll, double pitch, double yaw)
{
  // TODO: 使用 Eigen 的 AngleAxis 将欧拉角转换为旋转矩阵
  // 提示1：Eigen::AngleAxisd 可以表示绕某个轴的旋转
  // 提示2：欧拉角 ZYX 顺序，即先绕 Z 轴（yaw），再绕 Y 轴（pitch），最后绕 X 轴（roll）
  // 
  // 示例代码框架：
  // Eigen::AngleAxisd rollAngle(roll, Eigen::Vector3d::UnitX());
  // Eigen::AngleAxisd pitchAngle(pitch, Eigen::Vector3d::UnitY());
  // Eigen::AngleAxisd yawAngle(yaw, Eigen::Vector3d::UnitZ());
  // 
  // Eigen::Matrix3d rotation_matrix = (yawAngle * pitchAngle * rollAngle).matrix();
  
  throw std::runtime_error("Function not implemented!");
}

Eigen::Vector3d Rotation::rotMatrixToEuler(const Eigen::Matrix3d& rotMatrix)
{
  // TODO: 使用 Eigen 的 eulerAngles 方法提取欧拉角
  // 提示：Eigen::Matrix3d 可以直接调用 .eulerAngles() 方法
  // 
  // 示例：
  // Eigen::Vector3d euler = rotMatrix.eulerAngles(2, 1, 0);  // ZYX 顺序
  // 返回值是 (yaw, pitch, roll)
  
  throw std::runtime_error("Function not implemented!");
}

Eigen::Matrix3d Rotation::quaternionToRotMatrix(double w, double x, double y, double z)
{
  // TODO: 使用 Eigen::Quaterniond 将四元数转换为旋转矩阵
  // 提示：Eigen::Quaterniond 构造函数的参数顺序是 (w, x, y, z)
  // 
  // 示例代码：
  // Eigen::Quaterniond q(w, x, y, z);
  // q.normalize();  // 归一化四元数
  // Eigen::Matrix3d rotation_matrix = q.toRotationMatrix();
  
  throw std::runtime_error("Function not implemented!");
}

Eigen::Vector4d Rotation::rotMatrixToQuaternion(const Eigen::Matrix3d& rotMatrix)
{
  // TODO: 使用 Eigen::Quaterniond 将旋转矩阵转换为四元数
  // 提示：可以直接用旋转矩阵构造四元数
  // 
  // 示例代码：
  // Eigen::Quaterniond q(rotMatrix);
  // return Eigen::Vector4d(q.w(), q.x(), q.y(), q.z());
  
  throw std::runtime_error("Function not implemented!");
}

Eigen::Matrix3d Rotation::angleAxisToRotMatrix(double angle, const Eigen::Vector3d& axis)
{
  // TODO: 使用 Eigen::AngleAxisd 创建旋转矩阵
  // 提示：AngleAxisd 的构造函数：AngleAxisd(angle, axis)
  // 
  // 示例代码：
  // Eigen::Vector3d normalized_axis = axis.normalized();  // 先归一化轴
  // Eigen::AngleAxisd aa(angle, normalized_axis);
  // return aa.toRotationMatrix();
  
  throw std::runtime_error("Function not implemented!");
}

} // namespace matrix_transform