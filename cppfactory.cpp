#include "cppfactory.h"

std::shared_ptr<ClassUnit> CppFactory::createClassUnit(const std::string &name) {
    return std::make_shared<CppClassUnit> (name);
}

std::shared_ptr<MethodUnit> CppFactory::createMethodUnit(const std::string &name, const std::string &returnType, unsigned int flags) {
    return std::make_shared<CppMethodUnit> (name, returnType, flags);
}

std::shared_ptr<PrintOperatorUnit> CppFactory::createPrintOperatorUnit(const std::string &text) {
    return std::make_shared<CppPrintOperatorUnit> (text);
}
