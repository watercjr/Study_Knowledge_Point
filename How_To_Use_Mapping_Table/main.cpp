#include <iostream>
#include "PropertyTable/TableToID.hpp"
#include "PropertyTable/TableUsingMethod.hpp"

using namespace std;

/* 
 * 此demo介绍怎么在代码中使用 1）属性表（id对应各种属性）；2）二维矩阵表(罗列所有两两相交的情况)；
 * 
 */

void CustomerUsingPropertyTable();
void CustomerUsingMatrixTable();

int main() {

    CustomerUsingPropertyTable();
    CustomerUsingMatrixTable();

    return 0;
}

void CustomerUsingPropertyTable() {

    TIP_PROP_ID pop_id;
    pop_id = ID_MAX;
    cout << "The Sum Of Table - " << pop_id << endl;

    for(int id = (ID_START + 1); id < ID_MAX; id ++) {
        // print table's ID name
        cout << id << " name - \t" << GetIDName(id) << endl;

        // print table's global property
        cout << id << " global - \t" << (IsGlobal(id)?"true":"false") << endl;

    }

    // print all kinds of properties
    for(int id = (ID_START + 1); id < ID_MAX; id ++) {
        const TipProperty *property = GetTableProperty(id);
        if(property != nullptr) {
            cout << "ID:     \t"<< property->ID << endl;
            cout << "Global: \t" << property->global << endl;
            cout << "prio:   \t"   << property->prio << endl;
            cout << "time_min: \t" << property->time_min << endl;
            cout << "time_out: \t" << property->time_out << endl;
            cout << "close_when_move_to_home: \t" << property->close_when_move_to_home << endl;
        }
    }    
}

void CustomerUsingMatrixTable() {


}