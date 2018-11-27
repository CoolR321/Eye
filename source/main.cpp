//
// Created by HCR on 2018/11/15.
// Student Name: 黄成瑞
// Student Number: 2016301500272
//

// main.cpp -- 窗口管理系统主程序
#include "show.cpp"
// 窗口管理系统界面
void show_interface(){
    cout << "-----------------------------------   Eye   ------------------------------------" << endl;
    cout << "--    A Windows Management System   Author: 黄成瑞   Number: 2016301500272    --" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
}
// 命令提示
void show_command(){
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "-- New Window:n   Move Window:m   Resize Window:r   Delete Window:d   Quit: q --" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Please Enter Command> ";
}
int main(){
    // 初始化
    char cmd; // 命令
    Manage m;
    Show s(m);
    // 屏幕输出
    system("clear");
    show_interface();
    s.show_window();
    show_command();
    // 输入命令
    while(true){
        cin >> cmd; // 命令
        if(cmd == 'q'){
            cout << "Bye" << endl;
            return 0;
        }
        int num=0, top=0, right=0, bottom=0, left=0, z=0, to_right=0, to_bottom=0;
        if(cmd == 'n'){
            cout << "Enter: num top right bottom left z> ";
            cin >> num >> top >> right >> bottom >> left >> z;
            char c = '0' + num; // 窗口内容
            Window w(num, c); // 新窗口-n命令用到
            w.set_coordinate(top, right, bottom, left, z);
            m.insert_window(w);
        }
        if(cmd == 'm'){
            cout << "Enter: num to_right to_bottom> ";
            cin >> num >> to_right >> to_bottom;
            m.move_window(num, to_right, to_bottom);
        }
        if(cmd == 'r'){
            cout << "Enter: num top right bottom left> ";
            cin >> num >> top >> right >> bottom >> left;
            m.resize_window(num, top, right, bottom, left);
        }
        if(cmd == 'd'){
            cout << "Enter: num> ";
            cin >> num;
            m.delete_window(num);
        }
        // 刷新页面
        s.update(m);
        system("clear");
        show_interface();
        s.show_window();
        show_command();
        // 请空输入缓冲区
        cin.clear();
        cin.sync(); // 或者cin.ignore();
    }
    return 0;
}