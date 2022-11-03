#include <iostream>
#include <stdint.h>

typedef struct Data{
    int x;
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
    data->x = 1;

    uintptr_t ptr = serialize(data);
    Data* data2 = deserialize( ptr);

    std::cout << "Data  Address: " << data << std::endl;
    std::cout << "Data2 Address: " << data2 << std::endl;
    std::cout << "Data->x=  " << data->x << std::endl;
    std::cout << "Data2->x= " << data2->x << std::endl;

delete data;

}

