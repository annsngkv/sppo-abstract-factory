#include "cppfactory.h"

ClassUnit * CppFactory::createClassUnit(const std::string &name) {
    return new CppClassUnit(name);
}

MethodUnit * CppFactory::createMethodUnit(const std::string &name, const std::string &returnType, unsigned int flags) {
    return new CppMethodUnit (name, returnType, flags);
}

PrintOperatorUnit * CppFactory::createPrintOperatorUnit(const std::string &text) {
    return new CppPrintOperatorUnit (text);
}
