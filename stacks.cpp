//
// Created by guido on 10/16/2021.
//

#include "stacks.h"
#include <stack>

using namespace std;

void selectiveReverse(stack<int>& paramStack)
{
    stack<int> tempStack1;

    while (!paramStack.empty())
    {
        int topElem = paramStack.top();
        if ((topElem % 2 == 0) && (topElem != 2))
            tempStack1.push(topElem);

        paramStack.pop();
    }

    tempStack1.swap(paramStack);
}