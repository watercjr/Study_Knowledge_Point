#pragma once

enum HORIZONTAL_CONTEXT {
    HORIZONTAL_0 = 0,
    HORIZONTAL_1,
    HORIZONTAL_2,
    HORIZONTAL_3,
    HORIZONTAL_MAX
};

enum VERTICAL_CONTEXT {
    VERTICAL_0 = 0,
    VERTICAL_1,
    VERTICAL_2,
    VERTICAL_MAX
};

int GetTableItemStatus(int vertical_context, int horizontal_context);
int GetTableItemFirtstField(int vertical_context, int horizontal_context);
int GetTableItemSecondField(int vertical_context, int horizontal_context);