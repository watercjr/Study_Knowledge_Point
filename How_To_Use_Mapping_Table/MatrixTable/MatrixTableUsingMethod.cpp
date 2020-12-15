#include "MatrixTableUsingMethod.hpp"
#include "MatrixTableMacro.hpp"
#include <iostream>

using namespace std;

int GetTableItemStatus(int vertical_context, int horizontal_context) {

    if(vertical_context < VERTICAL_0 || vertical_context >= VERTICAL_MAX \
        || horizontal_context < HORIZONTAL_0 || horizontal_context >= HORIZONTAL_MAX) {
        cout << "[error] the input param out of the range" << endl;
        return -1;
    }
    return matrix_table_status[vertical_context][horizontal_context];
}


// 假设每个Itemstatus分成两个域（first：bit1 ~ bit8；second：bit9 ~ bit16）
// 如下两个函数可以获取域的值
int GetTableItemFirtstField(int vertical_context, int horizontal_context) {

    int item_status = GetTableItemStatus(vertical_context, horizontal_context);
    int first_field_value = item_status & 0x000000FF;
    return first_field_value;
}

int GetTableItemSecondField(int vertical_context, int horizontal_context) {

    int item_status = GetTableItemStatus(vertical_context, horizontal_context);
    int second_field_value = (item_status >> 8) & 0x000000FF;
    return second_field_value;
}