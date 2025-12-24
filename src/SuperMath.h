#pragma once
#include <iostream>

/*
       - Create by ( Houssam Miliani ) .
*/
namespace SuperMath{

int MaxOf2(int a, int b){
      if (a > b){
            return a;
      }else {
            return b;
      }
}

int MinOf2(int a, int b){
      if (a < b){
            return a;
      }else {
            return b;
      }
}

int MaxOf3(int a, int b, int c){

      if (a > b){
            if ( a > c){
                  return a;
            }else {
                  return c;
            }
            
      }else {
            if (b > c){
                  return b;
            }else {
                  return c;
            }
            
      }

int SigNum(int a){
 
      if (a == 0){
            return "zero";
      }else {
            if (a < 0){
                  return "Positive";
                  
            }else {
                  return "Negative";
            }
      }
      /* shortcuts ( Ternary Operator ) . 
      string Result = (num == 0) ? "zero " : ((num > 0) ? "Positive " : "Negative");
      cout << Result ;
      */
}
      
}


