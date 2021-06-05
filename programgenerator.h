#ifndef PROGRAMGENERATOR_H
#define PROGRAMGENERATOR_H
#include "ifactory.h"
#include "memory"

/*
 * Класс, выполняющий генерацию программы относительно
 * конкретного языка программирования
*/
class ProgramGenerator
{
    // язык, на котором будет генерироваться программа
    std::shared_ptr<IFactory> language;
    public:
        ProgramGenerator(const std::shared_ptr<IFactory>& _language) { language = _language; }
        /*
         * Функция генерации программы относительно заданного языка программирования
         *
         * return std::string
        */
        std::string generateProgram();
};

#endif // PROGRAMGENERATOR_H
