#include "MapGeneric.h"
#ifndef _MAPABSOLUTEVALUE_H
#define _MAPABSOLUTEVALUE_H

class MapAbsoluteValue: public MapGeneric{
    private:
        int f(int x);
	public:
        MapAbsoluteValue();
};
#endif