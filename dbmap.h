#ifndef DBMAP_H
#define DBMAP_H

#include <unordered_map>
#include <string>
#include <iostream>
#include <vector>
#include "dbhandler.h"

struct dbMap {
    std::unordered_map<std::string, DbHandler*> map_;
    // stores name of column and for books e. g. {id: {name, author, filename}}

public:
    dbMap();

};

#endif // DBMAP_H
