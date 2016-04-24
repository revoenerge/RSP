
#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>

using namespace std;

int main ()
    {

        int choice;
        int comp;
        char res;

        unsigned seed;

            cout << "Enter Rock, Scissors or Paper:\n";
            cout << "The rules are: \n Rock beats scissors. \n Scissors beats Paper. \n Paper beats rock.\n";

            cout << "Game Choices.\n\n";
            cout << "1. Rock\n";
            cout << "2. Scissors\n";
            cout << "3. Paper\n";
            cout << "Please enter your choice.";
            cin >> choice;




        if (choice == 1) // Rock
        {
            cout << "You choice Rock!" << endl;
        }

        else if (choice == 2) // Scissior
        {
            cout << "You choice Scissior!" << endl;
        }

        else if (choice == 3) // Paper
        {
            cout << "You choice Paper!" << endl;
        }




        seed = time (0);
        srand(seed);// random
        comp = rand () % 3 + 1; //random


                    if (comp == 1) //comp Rock
                    {
                        cout << "Comp choice Rock" << endl;
                    }

                    else if (comp == 2) // comp Scissior
                    {
                        cout << "Comp choice Scissior" << endl;
                    }

                    else if (comp == 3) // comp Paper
                    {
                        cout << "Comp choice Paper" << endl;
                    }


                            if ( choice == comp )
                            {
                                cout << "Drow\n";
                            }

                            if ((choice == 1 && comp == 2 ) || (choice == 3 && comp == 1) || (choice == 2 && comp == 3))
                            {
                            cout << "You win!" << endl;
                            }
                            if ((choice == 2 && comp == 1 ) || (choice == 1 && comp == 3) || (choice == 3 && comp == 2))
                            {
                            cout << "You Loser!" << endl;
                            }

        system ("pause");
        return 0;
    }
