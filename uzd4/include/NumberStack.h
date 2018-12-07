#ifndef NUMBERSTACK_H
#define NUMBERSTACK_H

/*D9. Izveidot klasi "Skaitïu steks", kurâ glabâjas masîvs ar skaitliskâm vçrtîbâm (int) garumâ 5 un steka elementu skaits.
Klasei izveidot ðâdas metodes: (1) konstruktors, (2) destruktors, kurð paziòo par objekta likvidçðanu un likvidçto elementu skaitu
(ja likvidçðanas brîdî steks nav tukðs), (3) metode "Push", kas pievieno stekam elementu, ja tas nav pilns, (4) metode "Pop", kas
izòem no steka augðçjo elementu un atgrieþ tâ vçrtîbu, (5) metode "Count", kas atgrieþ elementu skaitu stekâ, (6) metode "Top", kas
 atgrieþ augðçjâ elementa vçrtîbu, (7) metode "IsEmpty", kas noskaidro, vai steks ir tukðs, (8) metode "IsFull", kas noskaidro, vai
 steks ir pilns.  Pirms uzdevuma veikðanas precîzi noskaidrot, ko nozîmç jçdziens steks (stack).
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
