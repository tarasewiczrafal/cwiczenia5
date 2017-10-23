#ifndef ANALIZATORSYGNALU_H_INCLUDED
#define ANALIZATORSYGNALU_H_INCLUDED
 #include <iostream>
 #include <vector>
 #include <fstream>
 #include <sstream>
 #include <string>
 #include <stdexcept>
 #include <limits>
public  AnalizatorSygnalu()

double dlugosc(const Sygnal& sygnal );
double minimum(const Sygnal& sygnal );
double maksimum(const Sygnal& sygnal );
double srednia(const Sygnal& sygnal );
double calka(const Sygnal& sygnal );


#endif // ANALIZATORSYGNALU_H_INCLUDED
