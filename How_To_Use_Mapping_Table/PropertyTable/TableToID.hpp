#pragma once

enum TipCTX
{
    CTX_NULL = 0,
	CTX_CAR,
	CTX_CLIMATE
};

enum TipPriority
{
	PRO_0,
	PRO_10,
	PRO_20
};

#undef TABLE_START
#undef TABLE_ITEM
#undef TABLE_END

#define   LFT(a)     (1<<(a))

// 二维矩阵表转换为ID
// 目的：这样可以得到 ID 最大值 （ID_MAX-1），统计出有多少个ID（ID_MAX），给到其他地方使用
// 1. 将矩阵表每一行匹配为一个枚举值
// 2. 每个枚举值名称对应矩阵表中的ID


#define TABLE_START     typedef enum { ID_START = -1,

#define TABLE_ITEM(ID, prio, global, close_when_move_to_home, time_out, time_min, context)      ID,

#define TABLE_END       ID_MAX  } TIP_PROP_ID;

#include "Mapping_Table.hpp"