#include "csharpprintoperatorunit.h"

/*
 * В данной конкретной реализации функции compile происходит следующее:
 * генерируем отступ и выводим название функции вывода с встроенным в нее,
 * переданным текстом
 */
std::string CSharpPrintOperatorUnit::compile(unsigned int level) const {
    return generateShift(level) + "Console.WriteLine( \"" + m_text + "\" );\n";
}
