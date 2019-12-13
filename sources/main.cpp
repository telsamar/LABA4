//Copyright 2019 <LinkIvan333>
#include "FTPfiles.h"

int main(int argc, char *argv[]) {
    if (argc < 2)
    {
        path path_to_ftp("C:\\Git\\laba4\\ftp");
        iterate(path_to_ftp);
    } else {
        path path_to_ftp(argv[1]);
        iterate(path_to_ftp);
    }

    return 0;
}
