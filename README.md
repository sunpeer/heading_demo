# Heading_demo 说明

## 简介

本demo基于rt-thread系统，应用hmc5883l磁场传感器在公司的麦克纳姆小车上进行开发，能实现小车航偏角定向，误差小于5°

## hmc5883l介绍

使用的是模块GY-85，其上有加速度传感器adx345l、陀螺仪itg3205、磁场传感器hmc5883l。经测试，在该模块上有固定磁干扰，所以我们通过[Matlab校正程序](https://github.com/sunpeer/heading_demo)进行了校正。

