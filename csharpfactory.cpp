#include "csharpfactory.h"

ClassUnit * CSharpFactory::createClassUnit(const std::string &name) {
    return new CSharpClassUnit(name);
}

MethodUnit * CSharpFactory::createMethodUnit(const std::string &name, const std::string &returnType, unsigned int flags) {
    return new CSharpMethodUnit (name, returnType, flags);
}

PrintOperatorUnit * CSharpFactory::createPrintOperatorUnit(const std::string &text) {
    return new CSharpPrintOperatorUnit (text);
}
