#include <iostream>
using namespace std;

int main()
{
   int evony_damage, ivory_damage, total_damage;
   cin >> evony_damage >> ivory_damage >> total_damage;

   for(int i=0; i<= total_damage; i+= evony_damage)
   {
      for(int j=0; j<=total_damage; j+=ivory_damage)
      {
        if(i+j == total_damage)
        {
            cout << "Yes\n";
            return 0;
        }
      }
   }

   cout << "No\n";
   return 0;
}
