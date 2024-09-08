#include <iostream>
#include <dirent.h>
#include <string>
#include <sys/stat.h>
#include <windows.h>



using namespace std;
int main() {
    string path;
    getline(cin, path);
    DIR *dir;
    dir = opendir(path.c_str());
    if (dir == NULL) {
        cout << "Error opening directory" << endl;
        return 1;
    }




    struct dirent *entry;

    string filename=entry->d_name;

    if((entry=readdir(dir)) !=NULL){
        while ((entry=readdir(dir)) !=NULL) {


            string str1=".pdf";
            string str2="jpg";
            string str3=".txt";
            string str4=".dat";
            string str5=".mp4";




            if((filename.find(str1))!=string::npos){ //check extention
                string npath=path+"/Docs";
                mkdir(npath.c_str());
                cout << filename << endl;
                MoveFile((path+"/"+filename).c_str(), (npath+"/"+filename).c_str());

            }
            else if((filename.find(str2))!=string::npos) {
                //check extention
                string npath=path+"/Imgs";
                mkdir(npath.c_str());
                cout << filename << endl;
                MoveFile((path+"/"+filename).c_str(), (npath+"/"+filename).c_str());
            }

            else if((filename.find(str3))!=string::npos) {
                string npath=path+"/Ideas";
                mkdir(npath.c_str());
                cout << filename << endl;
                MoveFile((path+"/"+filename).c_str(), (npath+"/"+filename).c_str());
            }


            else if((filename.find(str4))!=string::npos) {
                string npath=path+"/Data";
                mkdir(npath.c_str());
                cout << filename << endl;
                MoveFile((path+"/"+filename).c_str(), (npath+"/"+filename).c_str());
            }
            else if((filename.find(str5))!=string::npos) {
                string npath=path+"/Multimedia";
                mkdir(npath.c_str());
                cout << filename << endl;
                MoveFile((path+"/"+filename).c_str(), (npath+"/"+filename).c_str());
            }else{
                string npath=path+"/Others";
                mkdir(npath.c_str());
                cout << filename << endl;
                MoveFile((path+"/"+filename).c_str(), (npath+"/"+filename).c_str());
            }



        }//end while


    }//end if





    cout << "The operation succeeded" << endl;




    closedir(dir);

    return 0;
}