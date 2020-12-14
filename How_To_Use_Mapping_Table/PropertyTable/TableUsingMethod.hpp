#pragma once

struct TipProperty
{
    int     ID;
    int     prio;
    bool    global;
    bool    close_when_move_to_home;
    int     time_out; 
    int     time_min; 
    int     context;
    void Reset()
    {
        ID = -1; prio = false;  global = false;
        close_when_move_to_home = false;
        time_out = 0;  time_min = 0;  
        context = 0;
    };
};

const char* GetIDName(int id);
const TipProperty* GetTableProperty(int id);
bool IsGlobal(int id);

