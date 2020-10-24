#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
    int myvar=25;
    int *foo = &myvar; //foo is a pointer. "foo" points to the address of variable myvar
    
    //what is the value of foo and *foo?
    //foo is a pointer so its value is address of the variable it points too.
    //*foo refers to the value being pointed. 
    cout<<"foo is : " <<foo<<"\n"; //foo= 0x7ffffffedf14
    cout<<"&myvar is : "<<&myvar<<"\n";
    cout<<"*foo is : " <<*foo<<"\n"; //*foo =25
    //assign new value to myvar without calling myvar
    *foo =26; // change the value of myvar. Now myvar =26;
    cout<<" *foo =26 so  myvar = "<<myvar<<"\n";
    
    //Array and pointers
    
    //array acts like pointer
    int numbers[5]; //number is an array of interger size of 5
    cout<<"numbers is: "<<numbers<<"\n"; //should be 0x7ffffffedf30. This mean acts like pointer.  
    int * p; // declare pointer p
    p = numbers; //pointer p points to the address off numbers. *p=&number is invalid syntax because "numbers" itself is like a pointer. 
    cout<<"*p is "<<*p<<" p is "<<p<<"\n"; 
   
    *p = 10; //since p points to "numbers", *p=10 will assign 10 to the first element of numbers i,e number[0] =10
    cout<<" numbers[0] is "<<numbers[0]<<"\n";
    
    p++;  *p = 20; //increase the pointer. Now p will point to the next element in the array.  Then assign that elment of array to 20.
    //numbers[1] =20
    cout<<"after increasing pointer p, p now points to  "<<p<<"\n"; //p now points to 0x7ffffffedf34 instead of 0x7ffffffedf30 
    p = &numbers[2];  *p = 30; /*a different way to increase the pointer. Since numbers[2] is an element of the array. To make p point to
    the address of numbers[2] we need to add the reference operator "&" in front of number[2]. Numbers[2] =30. 
    */
    cout<<"after increasing pointer p two times, p now points to  "<<p<<"\n";
    p = numbers + 3;  *p = 40; //another way to increase the pointer.  p= numbers + 3 means p is pointing to the address of number[3]
    cout<<"after increasing pointer p three times, p now points to  "<<p<<"\n";
    p = numbers;  *(p+4) = 50; /*how to assign value 50 to numbers[4] without calling numbers[4]?
    - make p points to the array (p=number)
    - refers to numbers[4] by pointer. Refering to the first element: *p. => to refer to the 4th element we use   *(p+4).
    =>*(p+4) = 50
     */
    for (int n=0; n<5; n++)
        cout << numbers[n] << ", ";
    return 0;
}
    

 