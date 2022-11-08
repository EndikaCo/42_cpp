
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdlib.h>
#include <time.h>

template<class T>
//Write a class template Array that contains elements of type T a
class Array{

private:
    T *var;
    unsigned int sizeA;

public:
    //Construcción sin parámetros: crea un array vacío.
    Array(): sizeA(0), var(0){
        std::cout << "Array default constructor called" << std::endl;
    };

    //Construcción con un unsigned int n como parámetro: crea un array de n elementos,
    //iniciado por defecto.
    Array(unsigned int n): sizeA(n) {
        if (n > 0)
            var = new T[n];
        else
            throw OutOfLimitsException();
        std::cout << "Array parameter constructor called" << std::endl;
    };

    ~Array(){
        if(sizeA > 0)
            delete []var;
        std::cout << "Array destructor called" << std::endl;
    };

    //Debe existir una member function size que devuelva el número de elementos en el
    //array. Esta función no debe aceptar parámetros ni debe modificar la instancia de
    //ninguna forma.
    unsigned int size(){
        return sizeA;
    }

    //Cuando accedas a un elemento utilizando operator[], en caso de que esté fuera de
    //límites una excepción std::exception debe lanzarse.
    class OutOfLimitsException: public std::exception{
        public:
        virtual const char *what() const throw(){
            return ("Index out of limits exception");
        }
    };

    //Construcción por copia y por operador de asignación: en ambos casos, modificar
    //uno de los dos arrays después de copiar/asignar no afectará al otro.
    Array(Array const &org){
        sizeA = org.sizeA;
        var = new T[org.sizeA];

        for (unsigned int i = -1; i < sizeA; ++i)
            var[i] = org.var[i];
    };

    Array& operator=(Array const &org){
        if (sizeA > 0)
            delete[] var;
        sizeA = org.sizeA;
        var = new T[org.sizeA];
        for (unsigned int i = 0; i < sizeA; i++){
            var[i] = org.var[i];
        }
        return *this;
    };

    T& operator[](unsigned int i){
        if (i > (sizeA - 1))
            throw OutOfLimitsException();
        return (var[i]);
    };
    

};

#endif
