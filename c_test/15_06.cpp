/*overriding  "覆載" -->參數相同 
    說明:子類別將繼承來的函數加以修改
*/
#include <iostream>
using namespace std;

class employee
{
     public: 
         int salary;
         void show(int x)
         {
              cout<<"員工層的薪水為(本薪):"<<x<<endl;
         }
};

class manager:public employee
{
     public:
          int bonus;
          void show(int x)   //overriding用法 
          {
               cout<<"經理層的薪水為(本薪+紅利):"<<x+bonus<<endl;
          }     
};

int main()
{
    employee e;    
    e.show(25000);
    
    manager m;
    m.bonus=30000;
    m.show(40000);

    system("pause");
    return 0;
}
