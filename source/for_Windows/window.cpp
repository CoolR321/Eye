//
// Created by HCR on 2018/11/15.
// Student Name: 黄成瑞
// Student Number: 2016301500272
//

// window.cpp -- 窗口类cpp文件
#include "window.h"
// 构造函数
Window::Window(int num, char content) {
	__num = num;
	__content = content;
}
// 设置坐标
void Window::set_coordinate(int top, int right, int bottom, int left, int z_index) {
	__top = top;
	__right = right;
	__bottom = bottom;
	__left = left;
	__z_index = z_index;
}
// 获取坐标
vector<int> Window::get_coordinate() {
	vector<int> v;
	v.push_back(__top);
	v.push_back(__right);
	v.push_back(__bottom);
	v.push_back(__left);
	v.push_back(__z_index);
	return v;
}
// 修改坐标
void Window::resize_coordinate(int top, int right, int bottom, int left, int z_index) {
	__top = top;
	__right = right;
	__bottom = bottom;
	__left = left;
	__z_index = z_index;
}
// 获取内容
char Window::get_content() {
	return __content;
}
// 获取z-index
int Window::get_z_index() {
	return __z_index;
}
// 判断窗口标号是否相等
bool Window::is_equal(int num) {
	if (__num == num)
		return true;
	else
		return false;
}
// 运算符重载-判断两个窗口是否为同一个窗口
bool operator == (Window a, Window b) {
	if (a.__num == b.__num)
		return true;
	else
		return false;
}