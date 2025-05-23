#include <iostream>
#include <string>
using namespace std;

/* Projektname: Einfacher Taschenrechner 

Grundrechenarten:
- Addition
- Subtraktion
- Multiplikation 
- Division

*/

enum enOperationType {
    Add = '+',
    Subtract = '-',
    Multi = '*',
    Divide = '/',
};

float ReadNumber(string Message)

{

    float Number;
    cout << endl << Message << endl;
    cin >> Number;
    return Number;
}

enOperationType ReadOpType()

{
    char OT = '+';
    cout << "\n\nPlease Enter the Operation Type \nAddtion = +\nSubtraction = -\nMultiplication = *\nDivison = / \n\nInput = ";
    cin >> OT;
    return (enOperationType)OT;
}

float Calculate(float Number1, enOperationType OpType, float Number2)

{
    switch (OpType)
    {

    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Subtract:
        return Number1 - Number2;
    case enOperationType::Multi:
        return Number1 * Number2;
    case enOperationType::Divide:
        return Number1 / Number2;

    default:
        return Number1 + Number2;
    }
}

int main()
{
    cout << "--------------- Simple Calculator ---------------" << endl << endl;
    float Number1 = ReadNumber("Please Enter the First Number:");
    enOperationType OpType = ReadOpType();
    float Number2 = ReadNumber("\nPlease Enter the Second Number:");

    
    cout << "\n" << Number1 << " " << (char)OpType << " " << Number2 << " = " << Calculate(Number1, OpType, Number2) << endl;


    return 0;
}
