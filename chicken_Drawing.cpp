
#include<iostream>
using namespace std;

void y1();
void b2();
void p3();
void o4();
void l5();
void g6();

void chicken();
main(){
    
    chicken();
    return 0;
}

void y1() {
    // colour the cell  FFF200 and clear the system from the colour after filling the cell
    cout << "\x1B[48;2;255;255;0m" ; cout << "  " ;
    cout << "\x1B[m" ; }

void b2(){// 000000
    cout << "\x1B[48;2;0;0;0m" ; cout << "  " ;
    cout << "\x1B[m" ; }

void p3(){// ffa3b1
    cout << "\x1B[48;2;255;163;177m" ; cout << "  " ;
    cout << "\x1B[m" ; }

void o4(){// ff7e00
    cout << "\x1B[48;2;255;126;0m" ; cout << "  " ;
    cout << "\x1B[m" ; }

void l5(){// e5aa7a
    cout << "\x1B[48;2;229;170;122m" ; cout << "  " ;
    cout << "\x1B[m" ; }

void g6(){// d3f9bc
    cout << "\x1B[48;2;211;249;188m" ; cout << "  " ;
    cout << "\x1B[m" ; }


void chicken(){

    {//INTRO 
    cout << "\x1B[48;2;255;255;255m" ; cout << "\x1B[38;2;255;0;0m" ;cout << "CALLING CHICKEN BABY...\n" ;
    cout << "\x1B[m" ; }



    {        g6(); g6(); 
             g6(); g6();
             g6(); g6();
             g6(); g6();
             g6(); g6(); } cout << "\n";  

    {        g6(); g6(); 
             g6(); y1();
             y1(); y1();
             y1(); g6();
             g6(); g6(); } cout << "\n";

    {        g6(); g6(); 
             y1(); y1();
             y1(); y1();
             y1(); y1();
             g6(); g6(); } cout << "\n";

    {        g6(); g6(); 
             y1(); b2();
             y1(); y1();
             b2(); y1();
             g6(); g6(); } cout << "\n";

    {        g6(); y1(); 
             p3(); p3();
             o4(); o4();
             p3(); p3();
             y1(); g6(); } cout << "\n";

    { g6(); y1();
      y1(); y1();
      y1(); y1();
      y1(); y1();
      y1(); g6(); } cout << "\n";

    { g6(); g6(); 
      y1(); y1();
      y1(); y1();
      y1(); y1();
      g6(); g6(); } cout << "\n";

    { g6(); g6();
      g6(); l5();
      g6(); g6();
      l5(); g6();
      g6(); g6();} cout << "\n";

    { g6(); g6();
      g6(); g6();
      g6(); g6();
      g6(); g6();
      g6(); g6();} cout << "\n";

    { g6(); g6();
      g6(); g6();
      g6(); g6();
      g6(); g6();
      g6(); g6();} cout << "\n";

}