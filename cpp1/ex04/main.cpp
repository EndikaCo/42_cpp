/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:05:54 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/01 11:42:35 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int ft_error(std::string fileName)
{
    std::cout << "Unable to open " << fileName << std::endl;
        exit(EXIT_FAILURE);
}

void ft_stream(std::string fileName,std::string s1, std::string s2)
{
    std::ifstream   inputStream(fileName); //variable for reading input
    std::ofstream   outputStream; //variable for writting output
    std::string     line;
    int pos;
    
    if(!inputStream.is_open()) //checks if can be opened
        ft_error(fileName);
    fileName = fileName.append(".replace");
    outputStream.open(fileName, std::ofstream::out);// creates the file
    if(!outputStream.is_open())
        ft_error(fileName);
    
    while(std::getline(inputStream, line))
    {
        pos = 0;
        while((pos = line.find(s1)) != -1)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
        }
        outputStream << line << std::endl;
    }    
   
    inputStream.close();
    outputStream.close();
}

int main(int argc, char**argv)
{
    std::string     fileName;
    if(argc < 3)
    {
        std::cout << "Argument error" << std::endl;
        return(1);
    }
    ft_stream(argv[1], argv[2], argv[3]);

    return (0);
}