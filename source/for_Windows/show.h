//
// Created by HCR on 2018/11/15.
// Student Name: 黄成瑞
// Student Number: 2016301500272
//

#ifndef EYE_SHOW_H
#define EYE_SHOW_H

// show.h -- 屏幕输出类头文件
#include "manage.h"
class Show {
private:
	Manage __m; // 用来屏幕输出的窗口系统
public:
	// 构造方法
	Show(Manage m);
	// 更新窗口系统
	void update(Manage m);
	// 屏幕输出显示当前窗口系统的窗口
	void show_window();
};

#endif //EYE_SHOW_H