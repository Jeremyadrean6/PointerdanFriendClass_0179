#include <iostream>
using namespace std;

class pelajar;
class manusia
{
    void shownilaipelajar (pelajar &x)
    void shiownilaipelajardua(pelajar &sched_yield)

};

class pelajar
{
   private:
    int nilai;

    public:
    pelajar() {nilai = 100 }
    friend void manusia ::shownilaipelajar(pelajar &x);

};

void manusia::shownilaipelajar(pelajar &x)
{
    cout << x.nilai;
}
// void manusia::shownilaipelajar(pelajar &y)
// {
// cout << y.nilai;

// }

int main()
{
    manusia _Budi;
    pelajar pbudi;
    budi.budishownilaipelajar(pbudi);
    return 0;

}