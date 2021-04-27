//
// Created by Admin on 27/04/2021.
//

#ifndef UNTITLED5_FILE_SYSTEM_H
#define UNTITLED5_FILE_SYSTEM_H
#include <vector>
#include "Folder.h"

using namespace std;

class File_system {
   vector<Folder> v_data;
   string local_path = string("v/");
public:
    const vector<Folder> &getVData() const;
    void terminal();
    void mkdir(string name);
    void chdir();
    void lproot();
    void rmdir();
    void remove();
    void copy(string& name_dest,const string& name_source);
};


#endif //UNTITLED5_FILE_SYSTEM_H
