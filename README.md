# GroupInclude_li_xia_yinMiniFly 飞控项目
项目简介
MiniFly 是一个基于 STM32F103 的飞控项目，包含飞控基础知识、硬件驱动、数学算法（如卡尔曼滤波、PID 控制）、地面站工具等。项目结构清晰，便于开发和学习嵌入式飞控系统。

目录结构
Core/
STM32 HAL 工程核心代码，包括主程序、外设驱动（GPIO、I2C、USART、TIM）、中断处理等。
Drivers/
STM32F1xx HAL 驱动库及 CMSIS 内核库。
HARDWARE/
硬件相关驱动，如 MPU6050 传感器、初始化、通信等。
MATH/
数学算法模块，包括 IMU 姿态解算、卡尔曼滤波、PID 控制等。
MDK-ARM/
Keil 工程文件、编译输出、调试配置等。
飞控基础知识.docx
飞控相关理论文档。
MiniFly.ioc
STM32CubeMX 工程配置文件。
ANOTC匿名地面站V5.exe
地面站工具（Windows 可执行文件）。
快速开始
使用 STM32CubeMX 打开 MiniFly.ioc，生成代码。
用 Keil MDK 打开 MDK-ARM/MiniFly.uvprojx 工程文件，编译下载到 STM32F103。
连接 MPU6050 等传感器，硬件驱动在 HARDWARE/ 目录下。
数学算法和姿态解算在 MATH/ 目录下，可根据需要修改和调试。
使用地面站工具 ANOTC匿名地面站V5.exe 进行数据监控和调试。
主要文件说明
main.c：主程序入口
imu.c / imu.h：IMU 姿态解算
kalman.c / kalman.h：卡尔曼滤波算法
pid.c / pid.h：PID 控制算法
mpu6050.c / mpu6050.h：MPU6050 传感器驱动
comm.c / comm.h：通信模块
适用硬件
STM32F103 系列单片机
MPU6050 传感器
其他常用飞控外设