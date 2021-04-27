//
// Created by Admin on 27/04/2021.
//

#include <ctime>
#include "File.h"


File::File(const string &fileName) : file_name(fileName){
    file.open(fileName);
    asctime(localtime(&this->time_of_update));
    file.close();
}





