//
// Created by HCR on 2018/11/15.
// Student Name: 黄成瑞
// Student Number: 2016301500272
//

#ifndef EYE_WINDOW_H
#define EYE_WINDOW_H

// window.h -- 窗口类头文件
#include "main.h"
class Window{
private:
    int __num; // 窗口标号
    int __top; // 窗口顶部坐标
    int __right; // 窗口右边坐标
    int __bottom; // 窗口底部坐标
    int __left; // 窗口左边坐标
    int __z_index; // 窗口z坐标
    char __content; // 窗口内容元素
public:
    // 构造函数
    Window(int num, char content);
    // 设置坐标
    void set_coordinate(int top, int right, int bottom, int left, int z_index);
    // 获取坐标
    vector<int> get_coordinate();
    // 修改坐标
    void resize_coordinate(int top, int right, int bottom, int left, int z_index);
    // 获取内容
    char get_content();
    // 获取z-index
    int get_z_index();
    // 判断窗口标号是否相等
    bool is_equal(int num);
    // 运算符重载-判断两个窗口是否为同一个窗口
    friend bool operator == (Window a, Window b);
};

#endif //EYE_WINDOW_H