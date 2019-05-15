///**
// *
// * @file    TestFunctorAbstraitCorr.cpp
// *
// * @authors M. Laporte, D. Mathieu
// *
// * @date    27/04/2010
// *
// * @version V1.0
// *
// * @brief   functor abstrait
// *
// **/
//#include <iostream>
//#include <string>
//#include <cctype>               // ispunct(), islower(), isalpha()
//                                // tolower(), toupper()
//#include <cassert>
 
//using namespace std;
 
//namespace
//{
//    class ITraitCar {
//    protected:
//        int myCpt;
//    public:
//        ITraitCar() : myCpt(0) {}
//        virtual ~ITraitCar(){}
//        virtual int operator()(int) = 0;

//        int getCpt() const {
//            return myCpt;
//        }
//    };

//    class ToLower : public ITraitCar {
//    public:
//        virtual int operator () (int caract) {
//            myCpt += isalpha(caract) ? 1 : 0;
//            return tolower (caract);
//        }
//    };

//    class ToUpper : public ITraitCar {
//    public:
//        virtual int operator () (int caract) {
//            ++myCpt;
//            return toupper (caract);
//        }
//    };

//    class ToIgnPunct : public ITraitCar {
//    public:
//        virtual int operator () (int caract) {
//            return ispunct(caract) && ++myCpt ? ' ' : caract;
//        }
//    };
 
//    string & moulinette (string & str, ITraitCar & transf)
//    {
//        for (string::size_type i (str.size ()); i--; )
//            str [i] = transf (str [i]);
 
//        return str;
 
//    } // moulinette()
 
//    void testFunctor (void)
//    {
//        cout << "Functor abstrait : ";
 
//        string ligne     ("azert:;,.?GFDSQ");
//        string minusc    ("azert:;,.?gfdsq");
//        string majusc    ("AZERT:;,.?GFDSQ");
//        string sansPunct ("AZERT     GFDSQ");

//        ToLower tl;
//        ToUpper tu;
//        ToIgnPunct tip;

//        assert (minusc    == moulinette (ligne, tl));
//        assert (majusc    == moulinette (ligne, tu));
//        assert (sansPunct == moulinette (ligne, tip));

//        assert(tl.getCpt() == 10);
//        assert(tu.getCpt() == 15);
//        assert(tip.getCpt() == 5);
 
//        cout << "OK\n";
 
//    } // testFunctor ()
 
//} // namespace anonyme
 
//int main (void)
//{
//    /*      */    testFunctor ();     /*           */
 
//    return 0;
 
//} // main()
