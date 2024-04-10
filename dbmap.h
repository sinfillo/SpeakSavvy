#ifndef DBMAP_H
#define DBMAP_H

#include <unordered_map>
#include <string>
#include <iostream>
#include <vector>
#include "dbhandler.h"

struct dbMap {
    std::unordered_map<std::string, DbHandler*> map_;
    // stores name of column(library, collection) and  corresponding dbhadler
    // for for books e. g. {"library": *dbhandler ["name", "author", ...]}
    dbMap();

};

#endif // DBMAP_H
