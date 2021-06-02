#include "classunit.h"

/*
 * Заполняем вектор модификаторами доступа
*/
const std::vector< std::string > ClassUnit::ACCESS_MODIFIERS = {
    "public", "protected", "private", "internal", "protected internal", ""
};

/*
 * В данной конкретной реализации функции add
 * для сущности Класс происходит следующее:
 * Проверяем входит ли флаг в вектор значений модификаторов доступа,
 * если да, то добавляем юнит в вектор юнитов с этим доступом, иначе
 * по умолчанию добавляется в вектор юнитов с доступом PRIVATE
*/
void ClassUnit::add(const std::shared_ptr<Unit> &unit, Flags flags) {
    int accessModifier = PRIVATE;

    if (flags < ACCESS_MODIFIERS.size()) {
        accessModifier = flags;
    }

    m_fields[accessModifier].push_back(unit);
}
