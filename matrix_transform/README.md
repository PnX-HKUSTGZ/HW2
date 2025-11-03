# 矩阵变换与坐标系基础训练

本作业旨在帮助新生**学会使用 Eigen 库**进行机器人视觉中的矩阵运算、旋转表示和坐标变换。这些技能在 RoboMaster 视觉自瞄等实际项目中每天都会用到。

## 学习目标

1. **掌握 Eigen 库的基本使用**
   - Eigen::Matrix 和 Eigen::Vector 的创建和操作
   - 矩阵运算符的使用（+, -, *, .transpose() 等）
   - 访问和修改矩阵元素

2. **学会使用 Eigen 处理旋转**
   - 使用 Eigen::AngleAxisd 表示旋转
   - 使用 Eigen::Quaterniond 进行旋转计算
   - 欧拉角与旋转矩阵的转换
   
3. **理解并应用坐标变换**
   - 使用齐次变换矩阵
   - 不同坐标系之间的变换
   - 实际场景：相机坐标系 → 世界坐标系

4. **实际应用：模拟自瞄场景**
   - 根据 PnP 求解结果计算装甲板位姿
   - 将相机坐标系下的点转换到世界坐标系
   - 计算目标运动预测所需的相对位置

## 作业要求

**不需要手动实现底层算法！** 你需要学会**调用 Eigen 库的函数**来完成任务。

1. 在 `src/matrix_basics.cpp` 中学习 Eigen 矩阵的基本操作
2. 在 `src/rotation.cpp` 中学习使用 Eigen 的旋转类
3. 在 `src/transform.cpp` 中完成坐标变换（参考 auto-aim 实际代码）
4. 在 `src/auto_aim_practice.cpp` 中完成自瞄实战练习

## 评分标准

1. 代码实现正确性 (60%)
2. 代码风格及注释完整性 (20%)
3. 实际应用理解程度 (20%)

## 参考资料

1. Eigen 库文档：http://eigen.tuxfamily.org/
2. ROS2 TF2 文档：https://docs.ros.org/en/humble/Tutorials/Intermediate/Tf2/Introduction-To-Tf2.html
3. 视觉 SLAM 十四讲

## 编译与运行

### 安装依赖
```bash
sudo apt-get install libeigen3-dev cmake build-essential
```

### 方法1：使用提供的脚本
```bash
./build.sh
```

### 方法2：手动编译
```bash
mkdir build && cd build
cmake ..
make -j$(nproc)

# 运行测试
./test/test_matrix_basics
./test/test_rotation
./test/test_transform
```

### VS Code 智能提示配置
项目已包含 `.vscode/c_cpp_properties.json` 配置文件。如果仍有波形曲线错误：
1. 确认已安装 Eigen3: `dpkg -l | grep eigen3`
2. 按 `Ctrl+Shift+P`，运行 `C/C++: Edit Configurations (UI)`
3. 检查 Include path 中是否包含 `${workspaceFolder}/includes`

## 提示

1. 建议先仔细阅读代码中的注释和说明
2. 可以参考 auto-aim 项目中的实际应用代码
3. 遇到问题可以查看 test 文件夹中的单元测试用例
4. 每完成一个函数后，运行对应的测试验证正确性