//
// Created by HCR on 2018/11/15.
// Student Name: 黄成瑞
// Student Number: 2016301500272
//

// show.cpp -- 屏幕输出类cpp文件
#include "show.h"
// 构造方法
Show::Show(Manage m){
    __m = m;
}
// 更新窗口系统
void Show::update(Manage m){
    __m = m;
}
// 屏幕输出显示当前窗口系统的窗口
void Show::show_window(){
    // 屏幕显示数组-初始化为'-'
    char content[MAX_HEIGHT][MAX_WIDTH];
    memset(content, ' ', sizeof(content));
    // 获取窗口系统里面的所有窗口
    vector<Window> w = __m.get_window();
    if(w.empty() == false){
        // 对所有窗口按照z-index升序排列
        sort(w.begin(), w.end(), cpm_z);
        // k用来重新定义z-index
        int k = 0;
        // 获取各个窗口内容并更新每个窗口的z-index
        vector<Window>::iterator it;
        for(it=w.begin(); it!=w.end(); it++){
            vector<int> v = it->get_coordinate();
            it->resize_coordinate(v[0], v[1], v[2], v[3], k); // 重新升序定义z-index
            for(int i=v[0]; i<v[2]; i++)
                for(int j=v[3]; j<v[1]; j++)
                    content[i][j] = it->get_content(); // 填充内容数组
            k++;
        }
        __m.update_window(w); // 更新窗口数组
    }
    // 屏幕输出
    for(int i=0; i<WINDOW_HEIGHT; i++){
        for(int j=0; j<WINDOW_WIDTH; j++)
            cout << content[i][j] << " ";
        cout << endl;
    }
}