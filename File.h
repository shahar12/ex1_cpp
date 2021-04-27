//
// Created by Admin on 27/04/2021.
//

#ifndef UNTITLED5_FILE_H
#define UNTITLED5_FILE_H

#include <string>
#include <fstream>

using namespace std;

class File {
private:
    string file_name;
   fstream file ;
   time_t time_of_update;
public:
    File(const string &fileName);
    void operator[](char write);
    char& operator[](const int index);
    void print_file();
    int count_data_file();
    File& create_hd();
};


#endif //UNTITLED5_FILE_H
