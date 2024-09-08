// #include <iostream>
// #include <dirent.h>
// #include <string>
// #include <sys/stat.h>
// #include <windows.h>
// #include <bits/stl_uninitialized.h>
//
//
// using namespace std;
// int main() {
//     string path;
//     getline(cin, path);
//     DIR *dir;
//     dir = opendir(path.c_str());
//     if (dir == NULL) {
//         cout << "Error opening directory" << endl;
//         return 1;
//     }
//
//
//
//
//     struct dirent *entry;
//
//     while ((entry=readdir(dir)) !=NULL) {
//
//         string filename=entry->d_name;
//
//         string str1=".pdf";
//
//
//
//
//         if((filename.find(str1))!=string::npos){ //check extention
//             string npath=path+"/documents";
//             mkdir((path+"/documents").c_str());
//             cout << filename << endl;
//             MoveFile((path+"/"+filename).c_str(), (npath+"/"+filename).c_str());
//
//         }
//
//
//     }
//
//     closedir(dir);
//
//
//
//
//
//
//
//
//
//
//
//
//     return 0;
// }
