#pragma once
#include "CLinkedList.h"

#ifndef __CLL_STACK_H__
#define __CLL_STACK_H__

typedef CList CStack;

void StackInit(CStack* pstack);
int SIsEmpty(CStack* pstack);

void SPush(CStack* pstack, Data data);
Data SPop(CStack* pstack);
Data SPeek(CStack* pstack);

#endif