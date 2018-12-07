/*
Author AZ18071
*/
/*
Izveidot programmu valod� C++, izmantojot objektorient�t�s programm��anas l�dzek�us un struktur�jot programmu vismaz tr�s failos.
Klases hederi oblig�ti novietot atsevi��� hedera fail� (program.h). Visas metodes realiz�t �rpus hedera faila � speci�l� C++ fail�
(program.cpp). Funkcija main ievietojama v�l cit� C++ fail� (main.cpp). Klases dati p�c noklus��anas ir sl�pti (private), bet
 metodes atkl�tas (public). ��s programmas ietvaros NAV oblig�ti j�nodro�ina t�da lietot�ja saskarne, k�da tika pras�ta iepriek��jos
  tr�s uzdevumos (main funkciju dr�kst �cieti� iekod�t). Citas pras�bas sk. Laboratorijas darbu noteikumos.
D9. Izveidot klasi "Skait�u steks", kur� glab�jas mas�vs ar skaitlisk�m v�rt�b�m (int) garum� 5 un steka elementu skaits.
Klasei izveidot ��das metodes: (1) konstruktors, (2) destruktors, kur� pazi�o par objekta likvid��anu un likvid�to elementu skaitu
(ja likvid��anas br�d� steks nav tuk�s), (3) metode "Push", kas pievieno stekam elementu, ja tas nav pilns, (4) metode "Pop", kas
iz�em no steka aug��jo elementu un atgrie� t� v�rt�bu, (5) metode "Count", kas atgrie� elementu skaitu stek�, (6) metode "Top", kas
 atgrie� aug��j� elementa v�rt�bu, (7) metode "IsEmpty", kas noskaidro, vai steks ir tuk�s, (8) metode "IsFull", kas noskaidro, vai
 steks ir pilns.  Pirms uzdevuma veik�anas prec�zi noskaidrot, ko noz�m� j�dziens steks (stack).
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
