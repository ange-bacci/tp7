#include <iostream>
#include <vector>
#include "Pers.hpp"

using namespace std;

namespace {

template <class T> class Comparator {
public:
    virtual ~Comparator() {}

    virtual bool operator() (const T &a, const T &b) const = 0;
};

class PersAgeAsc : public Comparator<Pers> {
    bool operator() (const Pers &a, const Pers &b) const {
        return a.getAge() < b.getAge();
    }
};

class PersNomDesc : public Comparator<Pers> {
    bool operator() (const Pers &a, const Pers &b) const {
        return a.getNom() > b.getNom();
    }
};

template <typename Iter_t, typename T>
void selectSort (Iter_t deb, Iter_t fin, const Comparator<T> &isInf) {
    if (fin <= deb) return;

    for ( ; deb < fin - 1; ++deb)
    {
        Iter_t rgMin = deb;
        for (Iter_t j (deb + 1); j < fin; ++j)
            if (isInf (*j, *rgMin)) rgMin = j;
        swap (*deb, *rgMin);
    }

} // selectSort()


void testLessThanAbstrGen (void)
{
    cout << "LessThanAbstrGen&nbsp;: \n";
 
    typedef vector <Pers> CVPers;
    typedef CVPers::size_type IndPers_t;
    CVPers vPers;
 
    vPers.push_back (Pers ("Charlotte", 21));
    vPers.push_back (Pers ("Alfred",    12));
    vPers.push_back (Pers ("Jean",      42));
    vPers.push_back (Pers ("Noemie",    11));
    vPers.push_back (Pers ("Berthe",    99));
    vPers.push_back (Pers ("Agathe",    29));
    vPers.push_back (Pers ("Sylvain",   42));
    vPers.push_back (Pers ("Pierre",    75));
 
    cout << "\nTri par age croissant\n\n";
 
    selectSort (vPers.begin(), vPers.end(), PersAgeAsc());
 
     for (const Pers & personne : vPers)
        cout << personne << '\n';
 
     cout << "\nTri par nom decroissant\n\n";
 
     selectSort (vPers.begin (), vPers.end (), PersNomDesc());
 
     for (const Pers & personne : vPers)
         cout << personne << '\n';
 
 } // testLessThanAbstrGen()

}

int main() {
    testLessThanAbstrGen();
}
