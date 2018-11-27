//
// Created by HCR on 2018/11/15.
// Student Name: 黄成瑞
// Student Number: 2016301500272
//

// manage.cpp -- 窗口管理类cpp文件
#include "manage.h"
// 构造函数
Manage::Manage(){
    __window_num = 0;
    __window_vector.clear();
}
// 插入新窗口
void Manage::insert_window(Window w){
    __window_num++;
    __window_vector.push_back(w);
}
// 移除窗口
void Manage::delete_window(int num){
    if(__window_num){
        vector<Window>::iterator it = __window_vector.begin();;
        for(; it!=__window_vector.end(); ){
            if(it->is_equal(num)){
                it = __window_vector.erase(it);
                __window_num--;
            }
            else it++;
        }
    }
}
// 窗口z—index比较
bool cpm_z(Window a, Window b){
    if(a.get_coordinate()[4] < b.get_coordinate()[4])
        return true;
    else
        return false;
}
// 修改指定窗口尺寸-只要修改了就会显示在最顶层
void Manage::resize_window(int num, int t, int r, int b, int l){
    vector<Window>::iterator it;
    int max = -10; // 找到最大的z-index
    for(it=__window_vector.begin(); it!=__window_vector.end(); it++)
        max = max > it->get_z_index() ? max : it->get_z_index();
    for(it=__window_vector.begin(); it!=__window_vector.end(); it++)
        if(it->is_equal(num))
            it->resize_coordinate(t, r, b, l, max+1);
}
// 移动指定窗口位置-向右和向下-只要移动了就会显示在最顶层
void Manage::move_window(int num, int to_right, int to_bottom){
    vector<Window>::iterator it;
    int max = -10; // 找到最大的z-index
    for(it=__window_vector.begin(); it!=__window_vector.end(); it++)
        max = max > it->get_z_index() ? max : it->get_z_index();
    for(it=__window_vector.begin(); it!=__window_vector.end(); it++)
        if(it->is_equal(num)){
            vector<int> v = it->get_coordinate();
            int top = v[0]+to_bottom < 0 ? 0 : v[0]+to_bottom;
            int right = v[1]+to_right < 0 ? 0 : v[1]+to_right;
            int bottom = v[2]+to_bottom < 0 ? : v[2]+to_bottom;
            int left = v[3]+to_right < 0 ? 0: v[3]+to_right;
            int z = max + 1;
            it->resize_coordinate(top, right, bottom, left, z);
        }
}
// 获取窗口数组
vector<Window> Manage::get_window(){
    return __window_vector;
}
// 更新窗口数组
void Manage::update_window(vector<Window> w){
    __window_vector = w;
    __window_num = w.size();
}