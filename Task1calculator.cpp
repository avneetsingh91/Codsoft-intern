#include <iostream>

using namespace std ;

float calculate (float num1, float num2, char optr){

    if (optr == '+' ){

        return num1 + num2;

    }


   else if  (optr == '*' ){

        return num1 * num2;

    }

    else if  (optr == '/' ){

        return num1 / num2;

    }
    
    else if  (optr == '-' ){

        return num1 - num2;

    }

    else {

        cout<<" you entered wrong ententity";
    }

}

int main (){

    float num1, num2;
    char opt;


    cout<< "enter your first number "<< endl;
    cin>>num1;

    cout<< " enter your operation from +, -, *, /"<< endl;
    cin>> opt;

    cout<< " enter your second number "<< endl;
    cin>> num2;
     
    cout << " your answer is ";

   cout<< calculate (num1,num2, opt);

}