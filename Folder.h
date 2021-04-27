//
// Created by Admin on 27/04/2021.
//

#ifndef UNTITLED5_FOLDER_H
#define UNTITLED5_FOLDER_H

#include <string>
#include<vector>
#include <iostream>
#include "File.h"

using namespace std ;

class Folder {
    string name;
    string path ;
    vector<File> file_container;
public:
    Folder(const string &name, const string &path, const vector<File> &fileContainer) :
    name(name),
    path(path),
    file_container(fileContainer) {}
    void touch(string filename);
    void copy(string& filename_dest,const string& filename_source);
    void print_ls();
    inline void print_pwd(){ cout << path << endl;}
};


#endif //UNTITLED5_FOLDER_H
