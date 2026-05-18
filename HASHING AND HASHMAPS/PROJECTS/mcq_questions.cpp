#include <iostream>
using namespace std;
int main()
{
   int sum = 0;
   int negative = -1;
   char interest;
   cout << "enter y/Y for attempting the questions:";
   cin >> interest;

   while ((interest == 'y') || (interest == 'Y'))
   {
      cout << "questions are to be solved in the order given . once skipped , can't move to any other previous question!!" << endl
           << endl;
      ;

      char option;
      cout << "question number 1:";
      cout << "sangeeta visited 'smile dental clinic' for treatment of toothaches. she observed that receptionist was seated at the reception desk, the placefixed for her.";
      cout << "dental instruments were laid neatly in a dental instrumental tray and the used instruments were placed in sterlisation area.";
      cout << "there was a fixed place for everything and it was present there.";
      cout << "there was no hindrance int he work of the dentist and he was working with his maximum eficiency!" << endl
           << endl;
      cout << " the principle followed by smile dental clinic :" << endl;
      cout << "a." << "equity" << endl
           << "b." << "discipline" << endl
           << "c." << "order" << endl
           << "d." << "equity" << endl
           << endl;

      cout << "enter the optiion:";
      cin >> option;
      if (option == 'c')
      {
         sum = sum + 4;
      }
      else
      {
         sum = sum + negative;
      }

      cout << "question number 2:";
      cout << "ram , a manager , often speak with people at all level passing on instruction regarding his department and alse the other departments. ";
      cout << "which principle of management is being overlooked ?" << endl;
      cout << "a." << "scalar chain" << endl
           << "b." << "order" << endl
           << "c." << "equity" << endl
           << "d." << "unit of order" << endl
           << endl;

      cout << "enter the option:";
      cin >> option;
      if (option == 'a')
      {
         sum = sum + 4;
      }
      else
      {
         sum = sum + negative;
      }

      cout << "question number 3:";
      cout << "mohan , the manager of business undertaking is very lax with his fellow employees and subordinates.he does not give them parameters or rules for reporting to work and complrtion of assignments.";
      cout << "which princple of management is being overlooked?" << endl;
      cout << "a." << "division of work" << endl
           << "b." << "discipline" << endl
           << "c." << "scalar chain" << endl
           << "d." << "initiative" << endl
           << endl;

      cout << "enter the option:";
      cin >> option;
      if (option == 'b')
      {
         sum = sum + 4;
      }
      else
      {
         sum = sum + negative;
      }
      cout << "enter n for exit :";
      cin >> interest;
   }
   cout << "total marks:" << sum;

   return 0;
}