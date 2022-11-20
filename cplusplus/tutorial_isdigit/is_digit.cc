/* Verify if user input is digit
 * by voidfemme
 * algorithm found at:
 * https://tutorialspoint.com/cplusplus-program-to-check-input-is-an-integer-or-a-string
 *
 * Example:
 *  Input-: 123
 *  Output-: 123 is an integer
 *  Input-: Tutorials Point
 *  Output-: Tutorials Point is a string
 *
 *  - Input data
 *  - Apply isdigit() function that checks whether a given input is numeric
 *    character or not. The function takes single argument as an integer and also
 *    returns the value of type int.
 *  - Print the resultant output
 *
 * Algorithm:
 *  Start
 *  Step 1 -> declare function to check if number or string
 *      bool check_number(string str)
 *      Loop For int i = 0 and i < str.length() and i++
 *          If (isdigit(str[i]) == false)
 *              return false
 *          End
 *      End
 *      return true
 *  Step 2 -> Int main()
 *      set string str = "sunidhi"
 *      IF (check_number(str))
 *          Print " is an integer"
 *      End
 *      Else
 *          Print " is a string"
 *      End
 *      Set string str1 = "1234"
 *          IF (check_number(str1))
 *              Print " is an integer"
 *          End
 *          Else
 *              Print " is a string"
 *          End
 *  Stop
 */

#include <iostream>
#include <string>

// Check if number or string
bool check_number(std::string str)
{
    for(int i=0; i< str.length(); i++)
    {
        if(isdigit(str[i]) == false)
        {
            return false;
        }
    }
    return true;
}
