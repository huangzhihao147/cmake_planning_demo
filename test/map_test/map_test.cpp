#include <iostream>
#include "pnc_map.h"

using std::cout, std::endl;

void maptesting()
{
    cout << "this is map testing function" << endl;
    PNC_Map pnc_map;
    pnc_map.mapInfo();
}

int main()
{
    cout << "map_test start" << endl;
    maptesting();
    cout << "map_test end" << endl;

    return 0;
}