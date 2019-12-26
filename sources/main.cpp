//Copyright 2019 <telsamar>
#include "../include/FTPfiles.h"

int main(int argc, char *argv[]) {
    if (argc < 2)
    {
        path path_to_ftp("C:\\универ\\GITHUB\\LABA4\\misc\\ftp");
        iterate(path_to_ftp);
    } else {
        path path_to_ftp(argv[1]);
        iterate(path_to_ftp);
    }

    return 0;
}
