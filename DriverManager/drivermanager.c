#include "drivermanager.h"
#include <string.h>

void main() {
    ProxyManager* pm = (ProxyManager*)malloc(sizeof(ProxyManager));
    pm -> size = 2; // you may change if wanna connect to more dbs
    pm -> conns = (DMHDBC*)malloc(sizeof(DMHDBC) * pm -> size);
    pm -> stmts = (DMHSTMT*)malloc(sizeof(DMHSTMT) * pm -> size);
}

