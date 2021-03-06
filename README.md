# Eye

## A Windows Management System



![](./img/Eye.png)



### 一、编译运行

- 编译运行

```bash
g++ main.cpp && ./a.out
```



- 启动系统

![](./img/Init.png)



### 二、新建窗口

- 命令格式：n 序号 顶部坐标 右边坐标 底部坐标 左边坐标 Z值
- 例如：n 1 0 10 10 0 1

| ![](./img/new1-1.png) |![](./img/new1-2.png) |
| :-------------------------------------------------------: | :-------------------------------------------------------: |
|                         新建窗口1                         |                           结果                            |



- 下面新建的2号窗口Z值大于1号窗口Z值，故在1号窗口上面显示

| ![](./img/new2-1.png) |![](./img/new2-2.png) |
| :-------------------------------------------------------: | :-------------------------------------------------------: |
|                         新建窗口2                         |                           结果                            |



### 三、移动窗口

- 命令格式：m 序号 向右位移 向下位移
- 例如：m 1 10 10
- 由于1号窗口发生移动，使得该窗口为活跃窗口，故显示在最顶层

| ![](./img/move1-1.png) | ![](./img/move1-2.png) |
| :--------------------------------------------------------: | :--------------------------------------------------------: |
|                         移动窗口1                          |                            结果                            |



- 移动2号窗口，在最顶层显示，部分遮盖3号窗口

| ![](./img/move2-1.png) |![](./img/move2-2.png) |
| :--------------------------------------------------------: | :--------------------------------------------------------: |
|                         移动窗口2                          |                            结果                            |



### 四、重置尺寸

- 命令格式：r 序号 顶部坐标 右边坐标 底部坐标 左边坐标
- 例如：r 3 0 8 8 0
- 既能修改窗口位置，也能修改窗口大小

| ![](./img/resize1-1.png) | ![](./img/resize1-2.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                          重置窗口3                           |                             结果                             |



| ![](./img/resize2-1.png) | ![](./img/resize2-2.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                          重置窗口2                           |                             结果                             |



### 五、删除窗口

- 命令格式：d 序号
- 例如：d 2

| ![](./img/delete1-1.png) | ![](./img/delete1-2.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                          删除窗口2                           |                             结果                             |



### 六、退出系统

- 命令格式：q

| ![](./img/quit1-1.png) | ![](./img/quit1-2.png) |
| :--------------------------------------------------------: | :--------------------------------------------------------: |
|                          退出系统                          |                            结果                            |



### 关于作者
Copyright © 2018 - 2018 CoolR.All Rights Reserved.
