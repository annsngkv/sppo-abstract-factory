#include "javafactory.h"

ClassUnit * JavaFactory::createClassUnit(const std::string &name) {
    return new JavaClassUnit(name);
}

MethodUnit * JavaFactory::createMethodUnit(const std::string &name, const std::string &returnType, unsigned int flags) {
    return new JavaMethodUnit (name, returnType, flags);
}

PrintOperatorUnit * JavaFactory::createPrintOperatorUnit(const std::string &text) {
    return new JavaPrintOperatorUnit (text);
}
