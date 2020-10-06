#include <string.h>
#include <iostream>

using namespace std;

#include "5_stack.h"

int main()
{
    CPair p1(1,2), p2(3,4);

    cout << p1 << p2 << endl;                                           // Prints: (1,2)(3,4)

    if(!(p1 == CPair(1,2)) || !(p2 == CPair(3,4)))
    {
        cerr << "Result 1 is wrong" << endl;
        return -1;
    }

    // Do tego miejsca: na 60%
    #if defined(FOR_80) || defined(FOR_100)

    CStack stack1;

    stack1.push(p1);
    stack1.push(p2);

    CStack stack2(stack1);

    CPair a = stack1.pop();
    CPair b = stack2.pop();

    cout << a << b << endl;                                             // Prints: (3,4)(3,4)

    if(!(a == CPair(3,4)) || !(b == CPair(3,4)))
    {
        cerr << "Result 2 is wrong" << endl;
        return -1;
    }

    stack2.push(CPair(5,6));

    a = stack1.pop();
    b = stack2.pop();

    cout << a << b << endl;                                             // Prints: (1,2)(5,6)

    if(!(a == CPair(1,2)) || !(b == CPair(5,6)))
    {
        cerr << "Result 3 is wrong" << endl;
        return -1;
    }

    // Do tego miejsca: na 80%
    #if defined(FOR_100)

    stack1 += stack2;

    cout << stack1 << endl;                                             // Prints (1,2)
    cout << stack2 << endl;                                             // Prints (1,2)

    if(!(stack1 == stack2))
    {
        cerr << "Result 4 is wrong" << endl;
        return -1;
    }

    stack1 += stack2;

    cout << stack1 << endl;                                             // Prints (1,2)(1,2)
    cout << stack2 << endl;                                             // Prints (1,2)

    if(stack1 == stack2)
    {
        cerr << "Result 5 is wrong" << endl;
        return -1;
    }

    // Do tego miejsca: na 100%
    #endif /*defined(FOR_100)*/
    #endif /*defined(FOR_80) || defined(FOR_100)*/

    return 0;
}

