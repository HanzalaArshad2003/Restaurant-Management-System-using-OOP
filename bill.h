#pragma once
using namespace System;
ref class Bill 
{
public:
    String^ ordered_item;
    String^ price;
    String^ billamount;
    
     virtual String^ generatebill(String^ itemprice){
         double pr = Convert::ToDouble(itemprice);
         if (pr < 300) {
             return "Regular Bill";
         }
         else {
             billamount = pr.ToString();
             return billamount;
         }
    }
};

