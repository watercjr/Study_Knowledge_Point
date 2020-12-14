#pragma once

#undef TABLE_START
#undef TABLE_ITEM
#undef TABLE_END

// 判断全局属性
#define TABLE_START     const bool isGlobal[] = {

#define TABLE_ITEM(ID, prio, global, close_when_move_to_home, time_out, time_min, context)      global,

#define TABLE_END       };

#include "Mapping_Table.hpp"