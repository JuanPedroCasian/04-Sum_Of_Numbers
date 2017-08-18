/*
Sum_Of_Numbers
Aug 17, 2017
Juan Casian
*/

#include <iostream>       //includes input and output

using namespace std;    //declares the namespace std

int main () {             // main process (Note: processes have a () after the process name)

  int LowerBound, LowerBoundInicial, UpperBound, Total;   //Declaration of variables

  LowerBound = 0;       //Declaration of starting values of variables
  UpperBound = 0;
  Total = 0;

  cout << "I will calculate the sum of integers in the range you provide." <<endl; //Prints instructions
  cout << "Please enter the LOWER bound value: "; cin >> LowerBound; //Prints instructions and get the value for "LowerBound"
  cout << "Please enter UPPER bound value: "; cin >> UpperBound;    //Prints instructions and get the value for "UpperBound"

  LowerBoundInicial = LowerBound;  /*States the value of "LowerBoundInicial" which is a
                                    variable created to print at the end the Lower
                                    boundary. */

  if (LowerBound > UpperBound) {     // If statement to get error: "LowerBound" is bigger than "UpperBound"

    cout << "The LOWER boundary can NOT be bigger than the UPPER boundary; RESTARTING..." << endl; // printing instructions

    return main();   //command to restart the main process, in this case the whole program

  } /* else if (ASK HOW TO NOT AN INTEGER) {

    cout << "The value you entered is not an integer, please try again; RESTARTING..."
    return main();
  }
  */

  for (; LowerBound <= UpperBound; LowerBound++) {        /* New loop command, which is used to add the numbers in the range.
                                                            Explanation of command:
                                                            for (inicialice a new variable; statement which if true the loop will keep running; change in variables) {

                                                            instructions for the loop

                                                          }

                                                          in our example it is using a total variable to keep the result of all the additions
                                                          then it reruns the loop, but at the beginning of it the variable's
                                                          "LowerBound" value is increased by 1 -> (LowerBound
                                                          */

    Total = Total + LowerBound;            //Addition for the sum of integers in range

  /*  cout << Total <<endl;     This part of the code was created for the testing of the program.
                                Its function was to print the value of "Total" to check if the additions
                                were running correctly in each step of the loop
                                */

  }

  cout << "The sum of the integers in the range from "; cout << LowerBoundInicial; cout << " to "; cout << UpperBound; cout << " is "; cout << Total; cout << "." << endl;
                    // The code above is just printing the results and the variables.

return 0;               //process return 0 to end program

}
