//
// Created by HCR on 2018/11/15.
// Student Name: 黄成瑞
// Student Number: 2016301500272
//

#ifndef EYE_MANAGE_H
#define EYE_MANAGE_H

// manage.h -- 窗口管理类头文件
#include "window.cpp"
class Manage{
private:
    int __window_num; // 窗口数量
    vector<Window> __window_vector; // 窗口数组
public:
    // 构造函数
    Manage();
    // 插入新窗口
    void insert_window(Window w);
    // 移除窗口
    void delete_window(int num);
    // 修改指定窗口尺寸
    void resize_window(int num, int t, int r, int b, int l);
    // 移动指定窗口位置-向右和向下
    void move_window(int num, int to_right, int to_bottom);
    // 获取窗口数组
    vector<Window> get_window();
    // 更新窗口数组
    void update_window(vector<Window> v);
};

#endif //EYE_MANAGE_H