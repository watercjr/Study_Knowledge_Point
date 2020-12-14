#include "TableUsingMethod.hpp"

#include "TableToID.hpp"
#include "TableIDToName.hpp"
#include "TableProperty.hpp"
#include "TableGlobalProperty.hpp"
#include <iostream>

using namespace std;

const char* GetIDName(int id) {

    if(id >= ID_MAX || id <= ID_START)
        return "Not Found";

    return id2name[id];
}

const TipProperty* GetTableProperty(int id) {

    if(id >= ID_MAX || id <= ID_START) {
        cout << id << "doesn't exist!" << endl;
        return NULL;
    }
    
    return (idWithProperty + id);
}

bool IsGlobal(int id) {

    if(id >= ID_MAX || id <= ID_START) {
        cout << id << "doesn't exist!" << endl;
        return "Not Found";
    }
    
    return isGlobal[id];
}

