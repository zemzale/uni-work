#ifndef NUMBERSTACK_H
#define NUMBERSTACK_H

/*D9. Izveidot klasi "Skait�u steks", kur� glab�jas mas�vs ar skaitlisk�m v�rt�b�m (int) garum� 5 un steka elementu skaits.
Klasei izveidot ��das metodes: (1) konstruktors, (2) destruktors, kur� pazi�o par objekta likvid��anu un likvid�to elementu skaitu
(ja likvid��anas br�d� steks nav tuk�s), (3) metode "Push", kas pievieno stekam elementu, ja tas nav pilns, (4) metode "Pop", kas
iz�em no steka aug��jo elementu un atgrie� t� v�rt�bu, (5) metode "Count", kas atgrie� elementu skaitu stek�, (6) metode "Top", kas
 atgrie� aug��j� elementa v�rt�bu, (7) metode "IsEmpty", kas noskaidro, vai steks ir tuk�s, (8) metode "IsFull", kas noskaidro, vai
 steks ir pilns.  Pirms uzdevuma veik�anas prec�zi noskaidrot, ko noz�m� j�dziens steks (stack).
*/

class NumberStack
{
    public:
        NumberStack();
        virtual ~NumberStack();
        void push(int number);
        int pop();
        int count();
        int top();
        bool isEmpty();
        bool isFull();

    protected:

    private:
        int max_size = 5;
        int size;
        int numbers[5];
        int freeIndex = 0;


};

#endif // NUMBERSTACK_H
