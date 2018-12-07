/*
Author AZ18071
*/
/*
Izveidot programmu valodâ C++, izmantojot objektorientçtâs programmçðanas lîdzekïus un strukturçjot programmu vismaz trîs failos.
Klases hederi obligâti novietot atseviðíâ hedera failâ (program.h). Visas metodes realizçt ârpus hedera faila – speciâlâ C++ failâ
(program.cpp). Funkcija main ievietojama vçl citâ C++ failâ (main.cpp). Klases dati pçc noklusçðanas ir slçpti (private), bet
 metodes atklâtas (public). Ðîs programmas ietvaros NAV obligâti jânodroðina tâda lietotâja saskarne, kâda tika prasîta iepriekðçjos
  trîs uzdevumos (main funkciju drîkst “cieti” iekodçt). Citas prasîbas sk. Laboratorijas darbu noteikumos.
D9. Izveidot klasi "Skaitïu steks", kurâ glabâjas masîvs ar skaitliskâm vçrtîbâm (int) garumâ 5 un steka elementu skaits.
Klasei izveidot ðâdas metodes: (1) konstruktors, (2) destruktors, kurð paziòo par objekta likvidçðanu un likvidçto elementu skaitu
(ja likvidçðanas brîdî steks nav tukðs), (3) metode "Push", kas pievieno stekam elementu, ja tas nav pilns, (4) metode "Pop", kas
izòem no steka augðçjo elementu un atgrieþ tâ vçrtîbu, (5) metode "Count", kas atgrieþ elementu skaitu stekâ, (6) metode "Top", kas
 atgrieþ augðçjâ elementa vçrtîbu, (7) metode "IsEmpty", kas noskaidro, vai steks ir tukðs, (8) metode "IsFull", kas noskaidro, vai
 steks ir pilns.  Pirms uzdevuma veikðanas precîzi noskaidrot, ko nozîmç jçdziens steks (stack).
*/

#include <iostream>
#include <NumberStack.h>

using namespace std;

int main()
{
    NumberStack n;
    if (n.isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
    } else {
        std::cout << "Stack is not empty" << std::endl;
    }

    if (n.isFull()) {
        std::cout << "Stack is full" << std::endl;
    } else {
        std::cout << "Stack is not full" << std::endl;
    }

    std::cout << "Last element in stack : " << n.top() << std::endl;
    n.pop();
    n.push(1);
    n.push(2);
    n.push(3);
    n.push(4);
    n.push(5);
    n.push(6);
    n.push(6);
    if (n.isFull()) {
        std::cout << "Stack is full" << std::endl;
    } else {
        std::cout << "Stack is not full" << std::endl;
    }

    std::cout << "Poping last element in stack : " << n.pop() << std::endl;
    n.push(1);
    std::cout << "Stack has : " << n.count() << " elements" << std::endl;
    n.push(2);
    n.push(3);
    std::cout << "Poping last element in stack : " << n.pop() << std::endl;
    std::cout << "Poping last element in stack : " << n.pop() << std::endl;
    std::cout << "Poping last element in stack : " << n.pop() << std::endl;
    std::cout << "Poping last element in stack : " << n.pop() << std::endl;
    std::cout << "Poping last element in stack : " << n.pop() << std::endl;
    std::cout << "Poping last element in stack : " << n.pop() << std::endl;
    n.push(1);
    n.push(2);
    n.push(3);



    return 0;
}
