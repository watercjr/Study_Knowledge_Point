#pragma once

#undef TABLE_START
#undef TABLE_ITEM
#undef TABLE_END

// 将ID转为对应的字符串
#define TABLE_START     TipProperty idWithProperty[] = {

#define TABLE_ITEM(ID, prio, global, close_when_move_to_home, time_out, time_min, context)  \
                {   \
                    ID, \
                    prio, \
                    global,     \
                    close_when_move_to_home, \
                    time_out, \
                    time_min, \
                    context \
                },

#define TABLE_END       };

#include "Mapping_Table.hpp"
