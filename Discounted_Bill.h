#pragma once
using namespace System;
#include "Bill.h"
ref class Discounted_Bill :
    public Bill
{
public:
    String^ generatebill(String^ itemprice) override{
        Double pr = Convert::ToDouble(itemprice);
        if (pr >= 300.0) {
            return "Discounted Bill";
        }
        else {
            billamount = pr.ToString();
            return billamount;
        }
    }
};

