//#include <iostream>
#include <filesystem>
#include <string>
#include <bits/fs_fwd.h>
// #include <fstream>
 #include <dirent.h>
// #include <sys/stat.h>
using namespace std;
int main() {
    string path;
    filesystem::current_path(path);

    return 0;
}
