///**
// *
// * @file    TestFunctorAbstrait.cpp
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
//    public:
//        virtual ~ITraitCar(){}
//        virtual int operator()(int) const = 0;
//    };

//    class ToLower : public ITraitCar {
//      public:
//        virtual int operator () (int caract) const {
//            return tolower (caract);
//        }
//    };

//    class ToUpper : public ITraitCar {
//      public:
//        virtual int operator () (int caract) const {
//            return toupper (caract);
//        }
//    };

//    class ToIgnPunct : public ITraitCar {
//      public:
//        virtual int operator () (int caract) const {
//            return ispunct(caract) ? ' ' : caract;
//        }
//    };
 
//    string & moulinette (string & str, const ITraitCar & transf)
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

//        assert (minusc    == moulinette (ligne, ToLower()));
//        assert (majusc    == moulinette (ligne, ToUpper()));
//        assert (sansPunct == moulinette (ligne, ToIgnPunct()));
 
//        cout << "OK\n";
 
//    } // testFunctor ()
 
//} // namespace anonyme
 
//int main (void)
//{
//    /*      */    testFunctor ();     /*           */
 
//    return 0;
 
//} // main()
