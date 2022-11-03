#include <iostream>
#include <stdint.h>

//You must create a valid data structure.
typedef struct Data{
    int isUsable;
}Data;

Data *deserialize(uintptr_t raw){
return(reinterpret_cast<Data *>(raw));
}

uintptr_t serialize(Data *ptr){
    return(reinterpret_cast<uintptr_t>(ptr));
}

int main()
{
    Data *data = new Data;
    data->isUsable = 1;

    uintptr_t ptr = serialize(data);//Take a Data address use serialize on it.
    Data* data2 = deserialize( ptr);//Send the return value in deserialize.

    //Check if the return value is equal to the first pointer
    std::cout << "Data  Address: " << data << std::endl;std::cout << "Data2 Address: " << data2 << std::endl;
    std::cout << "Data->x=  " << data->isUsable << std::endl;
    std::cout << "Data2->x= " << data2->isUsable << std::endl;

delete data;

}

