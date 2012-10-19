#include <Node.h>
#include <TwoDArray.h>
#include <iostream>
#include <string>


<template typename T>
TwoDArray(int r, int c, int def){
 r = 10;
 c = 10;
 def = 0;
 int** array = new int*[r][c];
 	for (int i =0; i< 10; i++){
	  array[i] = new int[10]; 
	 
	}


}

<template typename T>
~TwoDArray(){};


<template typename T> 
void insert(int r, int c, T value){
  asser(!array.empty());
  int k = getNumRows();
  int x = getNumCols();
    array[k+1][x+1] = value;	
    
} 

<template typename T>
T access(int r, int c){


}

<template typename T>
void remove (int r, int c){


}

<template typename T>
int getNumRows() {

  return 0;

}

<template typename T>
int getNumCols(){

  return 0;
}


