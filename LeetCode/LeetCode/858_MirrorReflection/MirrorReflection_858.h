//
//  MirrorReflection_858.h
//  LeetCode
//
//  Created by Shun on 2019/5/10.
//  Copyright © 2019 Shun. All rights reserved.
//

#ifndef MirrorReflection_858_h
#define MirrorReflection_858_h

#include <stdio.h>

//858. 镜面反射
//有一个特殊的正方形房间，每面墙上都有一面镜子。除西南角以外，每个角落都放有一个接受器，编号为 0， 1，以及 2。
//
//正方形房间的墙壁长度为 p，一束激光从西南角射出，首先会与东墙相遇，入射点到接收器 0 的距离为 q 。
//
//返回光线最先遇到的接收器的编号（保证光线最终会遇到一个接收器）。
//
//
//
//示例：
//
//输入： p = 2, q = 1
//输出： 2
//解释： 这条光线在第一次被反射回左边的墙时就遇到了接收器 2 。
//
//
//
//提示：
//
//1 <= p <= 1000
//0 <= q <= p

int mirrorReflection(int p, int q);

#endif /* MirrorReflection_858_h */
