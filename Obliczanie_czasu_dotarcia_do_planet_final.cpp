//KM
//17 1 2021
//Obliczanie czasu dotarcia do planet różnych.
#include <iostream>
using namespace std;
int main()
{
string pytanie_o_planete, pytanie_o_planete2, pytanie_o_planete_skrypt = "Czy jestes pewien ze chcesz obliczyc: ",ok = "[OK]", pytanie_predkosc, grawitacja_ziemi_txt = "Nie uciekniesz grawitacji ziemi!";
int grawitacja_ziemi = 40320, szybkosc, ksiezyc_odl = 384399,Jowisz_odl = 628800000,mars_odl = 78338376, saturn_odl = 1277127523, slonce_odl = 149597890;
cout << "             _____"  << endl;
cout << "        ,-:` |:',`'-, "  << endl;
cout << "     .'-;_,;  ':-;_,'."  << endl;
cout << "     .;   '/    ,  _`.-."  << endl;
cout << "     | '`. (`     .` ` .`|"  << endl;
cout << "     |:.  `.`-.   ._   . |"  << endl;
cout << "     |     (   `,  .`. ;'|"  << endl;
cout << "     |     | .'     `-'."  << endl;
cout << "     `.   ;.        .'"  << endl;
cout << "       `'-._____."  << endl;
loop_planety:
loop:
cout << "Jakie chcesz planety wybrac?" << endl;
cout << "Do wyboru: Mars, Jowisz, Saturn, Slonce oraz Ksiezyc" << endl;
do{
getline(cin, pytanie_o_planete);
cout << "Twoj wybor planety: " << pytanie_o_planete << endl;
if (pytanie_o_planete == "Mars" || pytanie_o_planete == "Jowisz" || pytanie_o_planete == "Saturn" ||  pytanie_o_planete == "Slonce" || pytanie_o_planete == "Ksiezyc"){
do{
  cout << "y/n " << pytanie_o_planete_skrypt << pytanie_o_planete << endl;
  getline (cin, pytanie_o_planete2);
  if (pytanie_o_planete2 == "y"){
  if (pytanie_o_planete == "Ksiezyc"){
      cout << "Program do mierzenia czasu dotarcia do Ksiezyca!" << endl;
      loop_predkosc_ksiezyc:
      cout << "        |" << endl;
      cout << "       @ @" << endl;
      cout << "      @ _ @" << endl;
      cout << "     |.o '.|" << endl;
      cout << "     |'._.'|" << endl;
      cout << "     |     |" << endl;
      cout << "   ,'|  |  |`." << endl;
      cout << "  |  |  |  |  |" << endl;
      cout << "  |,-'--|--'-.|" << endl;
      cout << "Podaj predkosc w km/h" << endl;
      cin >> szybkosc;
      cout << "Twoja szybkosc: " << szybkosc << " km/h"   << endl;
      cout << "Czy chcesz wybrać predkosc jeszcze raz? y/n" << endl;
      do {
        getline(cin,pytanie_predkosc);
        if (pytanie_predkosc == "y") {
          cout << ok << endl;
          goto loop_predkosc_ksiezyc;
        }
        if (pytanie_predkosc == "n") {
          cout << ok << endl;
          if (szybkosc < grawitacja_ziemi) {
            cout << grawitacja_ziemi_txt << endl;
            cout << "Która wynosi "  << grawitacja_ziemi << endl;
          }
          cout << ksiezyc_odl << " / " << szybkosc << " = " << ksiezyc_odl / szybkosc << "h" << endl;
          cout << "Uda ci się dostać do księżyca w " << ksiezyc_odl / szybkosc << "h" << endl;
          cout << "*                                                            *" << endl;
          cout << "                        aaaaaaaaaaaaaaaa               *" << endl;
          cout << "                    aaaaaaaaaaaaaaaaaaaaaaaa" << endl;
          cout << "                 aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl;
          cout << "               aaaaaaaaaaaaaaaaa           aaaaaa" << endl;
          cout << "             aaaaaaaaaaaaaaaa                  aaaa" << endl;
          cout << "            aaaaaaaaaaaaa aa                      aa" << endl;
          cout << "*           aaaaaaaa      aa                         a" << endl;
          cout << "           aaaaaaa aa aaaa" << endl;
          cout << "     *    aaaaaaaaa     aaa" << endl;
          cout << "          aaaaaaaaaaa aaaaaaa                               *" << endl;
          cout << "          aaaaaaa    aaaaaaaaaa" << endl;
          cout << "          aaaaaa a aaaaaa aaaaaa" << endl;
          cout << "           aaaaaaa  aaaaaaa" << endl;
          cout << "           aaaaaaaa                                 a" << endl;
          cout << "            aaaaaaaaaa                            aa" << endl;
          cout << "             aaaaaaaaaaaaaaaa                  aaaa" << endl;
          cout << "               aaaaaaaaaaaaaaaaa           aaaaaa        *" << endl;
          cout << " *               aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl;
          cout << "                    aaaaaaaaaaaaaaaaaaaaaaaa" << endl;
          cout << "                 *      aaaaaaaaaaaaaaaa" << endl;
        goto loop;
        }
      } while(pytanie_predkosc != "y" || pytanie_predkosc != "n");


  }
  if (pytanie_o_planete == "Jowisz"){
      cout << "Program do mierzenia czasu dotarcia do Jowisza!" << endl;
      loop_predkosc_jowisz:
      cout << "        |" << endl;
      cout << "       @ @" << endl;
      cout << "      @ _ @" << endl;
      cout << "     |.o '.|" << endl;
      cout << "     |'._.'|" << endl;
      cout << "     |     |" << endl;
      cout << "   ,'|  |  |`." << endl;
      cout << "  |  |  |  |  |" << endl;
      cout << "  |,-'--|--'-.|" << endl;
      cout << "Podaj predkosc w km/h" << endl;
      cin >> szybkosc;
      cout << "Twoja szybkosc: " << szybkosc << " km/h"   << endl;
      cout << "Czy chcesz wybrać predkosc jeszcze raz? y/n" << endl;
      do {
        getline(cin,pytanie_predkosc);
        if (pytanie_predkosc == "y") {
          cout << ok << endl;
          goto loop_predkosc_jowisz;
        }
        if (pytanie_predkosc == "n") {
          cout << ok << endl;
          if (szybkosc < grawitacja_ziemi) {
            cout << grawitacja_ziemi_txt << endl;
            cout << "Która wynosi "  << grawitacja_ziemi << endl;
          }
          cout << Jowisz_odl << " / " << szybkosc << " = " << Jowisz_odl / szybkosc << "h" << endl;
          cout << "Uda ci się dostać do Jowisza w " << Jowisz_odl / szybkosc << "h" << endl;
          cout << "      @@@@@@@@" << endl;
          cout << "    @@@@@@@@@@@@" << endl;
          cout << "  @@@@@@@@@@@@@@@@@" << endl;
          cout << "  @@@@@@@@@@@____@@@" << endl;
          cout << "  @@@@@@@@@@(   )@@@" << endl;
          cout << "  @@@@@@@@@@@___@@@@" << endl;
          cout << "    @@@@@@@@@@@@@@" << endl;
          cout << "      @@@@@@@@" << endl;

        goto loop;
        }
      } while(pytanie_predkosc != "y" || pytanie_predkosc != "n");
  }
  if (pytanie_o_planete == "Mars"){
      cout << "Program do mierzenia czasu dotarcia do Marsa!" << endl;
      loop_predkosc_mars:
      cout << "        |" << endl;
      cout << "       @ @" << endl;
      cout << "      @ _ @" << endl;
      cout << "     |.o '.|" << endl;
      cout << "     |'._.'|" << endl;
      cout << "     |     |" << endl;
      cout << "   ,'|  |  |`." << endl;
      cout << "  |  |  |  |  |" << endl;
      cout << "  |,-'--|--'-.|" << endl;
      cout << "Podaj predkosc w km/h" << endl;
      cin >> szybkosc;
      cout << "Twoja szybkosc: " << szybkosc << " km/h"   << endl;
      cout << "Czy chcesz wybrać predkosc jeszcze raz? y/n" << endl;
      do {
        getline(cin,pytanie_predkosc);
        if (pytanie_predkosc == "y") {
          cout << ok << endl;
          goto loop_predkosc_mars;
        }
        if (pytanie_predkosc == "n") {
          cout << ok << endl;
          if (szybkosc < grawitacja_ziemi) {
            cout <<  grawitacja_ziemi_txt << endl;
            cout << "Która wynosi "  << grawitacja_ziemi << endl;
          }
          cout << mars_odl << " / " << szybkosc << " = " << mars_odl / szybkosc << "h" << endl;
          cout << "Uda ci się dostać do Marsa w " << mars_odl / szybkosc << "h" << endl;
        goto loop;
        }
      } while(pytanie_predkosc != "y" || pytanie_predkosc != "n");


  }
  if (pytanie_o_planete == "Saturn"){
      cout << "Program do mierzenia czasu dotarcia do Saturna!" << endl;
      loop_predkosc_saturn:
      cout << "        |" << endl;
      cout << "       @ @" << endl;
      cout << "      @ _ @" << endl;
      cout << "     |.o '.|" << endl;
      cout << "     |'._.'|" << endl;
      cout << "     |     |" << endl;
      cout << "   ,'|  |  |`." << endl;
      cout << "  |  |  |  |  |" << endl;
      cout << "  |,-'--|--'-.|" << endl;
      cout << "Podaj predkosc w km/h" << endl;
      cin >> szybkosc;
      cout << "Twoja szybkosc: " << szybkosc << " km/h"   << endl;
      cout << "Czy chcesz wybrać predkosc jeszcze raz? y/n" << endl;
      do {
        getline(cin,pytanie_predkosc);
        if (pytanie_predkosc == "y") {
          cout << ok << endl;
          goto loop_predkosc_saturn;
        }
        if (pytanie_predkosc == "n") {
          cout << ok << endl;
          if (szybkosc < grawitacja_ziemi) {
            cout <<  grawitacja_ziemi_txt << endl;
            cout << "Która wynosi "  << grawitacja_ziemi << endl;
          }
          cout << saturn_odl << " / " << szybkosc << " = " << saturn_odl / szybkosc << "h" << endl;
          cout << "Uda ci się dostać do Saturna w " << saturn_odl / szybkosc << "h" << endl;
          cout << "          ,MMM8&&&." << endl;
          cout << "    _...MMMMM88&&&&..._" << endl;
          cout << "  .::''' MMMMM88&&&&&&'''::." << endl;
          cout << "  ::     MMMMM88&&&&&&     ::" << endl;
          cout << "  '::....MMMMM88&&&&&&....::'" << endl;
          cout << "  `''''  MMMMM88&&&&''''`" << endl;
          cout << "         'MMM8&&&'" << endl;
        goto loop;
        }
      } while(pytanie_predkosc != "y" || pytanie_predkosc != "n");

  }
  if (pytanie_o_planete == "Slonce"){
      cout << "Program do mierzenia czasu dotarcia do Slonca!" << endl;
      loop_predkosc_slonce:
      cout << "        |" << endl;
      cout << "       @ @" << endl;
      cout << "      @ _ @" << endl;
      cout << "     |.o '.|" << endl;
      cout << "     |'._.'|" << endl;
      cout << "     |     |" << endl;
      cout << "   ,'|  |  |`." << endl;
      cout << "  |  |  |  |  |" << endl;
      cout << "  |,-'--|--'-.|" << endl;
      cout << "Podaj predkosc w km/h" << endl;
      cin >> szybkosc;
      cout << "Twoja szybkosc: " << szybkosc << " km/h"   << endl;
      cout << "Czy chcesz wybrać predkosc jeszcze raz? y/n" << endl;
      do {
        getline(cin,pytanie_predkosc);
        if (pytanie_predkosc == "y") {
          cout << ok << endl;
          goto loop_predkosc_slonce;
        }
        if (pytanie_predkosc == "n") {
          cout << ok << endl;
          if (szybkosc < grawitacja_ziemi) {
            cout <<  grawitacja_ziemi_txt << endl;
            cout << "Która wynosi "  << grawitacja_ziemi << endl;
          }
          cout << slonce_odl << " / " << szybkosc << " = " << slonce_odl / szybkosc << "h" << endl;
          cout << "Uda ci się dostać do Slonca w " << slonce_odl / szybkosc << "h" << endl;
          cout << "            ;      ;" << endl;
          cout << "        .   |_,!,_.   ," << endl;
          cout << "         `.,'     `.,'" << endl;
          cout << "           /         ." << endl;
          cout << "      ~ -- :         : -- ~" << endl;
          cout << "           |         ." << endl;
          cout << "          ,'`._   _.'`." << endl;
          cout << "          '   . `!`   `" << endl;
          cout << "          ;      ;  " << endl;
        goto loop;
        }
      } while(pytanie_predkosc != "y" || pytanie_predkosc != "n");
    }
}//if_pytanie_o_planete_2
if (pytanie_o_planete2 == "n"){
goto loop_planety;
}
}
while(pytanie_o_planete2 != "y" || pytanie_o_planete2 != "n");
}//if 2
} while(pytanie_o_planete != "Mars" || pytanie_o_planete != "Jowisz" || pytanie_o_planete != "Saturn"  || pytanie_o_planete != "Slonce" || pytanie_o_planete != "Ksiezyc");
}
