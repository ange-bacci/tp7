#ifndef TYPESBASE_HPP
#define TYPESBASE_HPP

#include <string>
#include <cstdint>

namespace std {

    template <class T> class TypeBase {
        T myVal;

    public:
        explicit TypeBase(const T &val) : myVal(val) {
            this->myVal = val;
        }

        operator T& (void) {
            return myVal;
        }
    };

    typedef TypeBase<int16_t> Short;
    typedef TypeBase<int32_t> Integer;
    typedef TypeBase<uint8_t> Character;
}

#endif // TYPESBASE_HPP
