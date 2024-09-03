#pragma once
using namespace System;
#include "order.h"
ref class table :
    public order
{
public:
    String^ table_no;
    String^ seats;
};

