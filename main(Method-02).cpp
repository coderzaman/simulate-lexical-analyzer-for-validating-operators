#include<iostream>
using namespace std;

void checkOperator(string str){
    if(str == "+"){
        cout << "Addition, Arithmetic  Operator" << endl;
    }else if(str == "-"){
         cout << "Subtraction, Arithmetic  Operator" << endl;
    }else if(str == "*"){
         cout << "Multiplication, Arithmetic  Operator" << endl;
    }else if(str == "/"){
         cout << "Division, Arithmetic  Operator" << endl;
    }else if(str == "%"){
         cout << "Modulus, Arithmetic  Operator" << endl;
    }else  if(str == ">"){
        cout << "Greater than, Relational Operator" << endl;
    }else if(str == "<"){
         cout << "Less than, Relational Operator" << endl;
    }else if(str == ">="){
         cout << "Greater than equal, Relational Operator" << endl;
    }else if(str == "<="){
         cout << "Less than equal, Relational Operator" << endl;
    }else if(str == "!="){
         cout << "Not Equal, Relational Operator" << endl;
    }else if(str == "=="){
         cout << "Equal Equal, Relational Operator" << endl;
    }else if(str == "="){
        cout << "Equal, Assignment Operator" << endl;
    }else if(str == "+="){
        cout << "Additional assignment, Assignment Operator" << endl;
    }else if(str == "-="){
        cout << "Subtraction assignment, Assignment Operator" << endl;
    }else if(str == "*="){
        cout << "Multiplication assignment, Assignment Operator" << endl;
    }else if(str == "/="){
        cout << "Division assignment, Assignment Operator" << endl;
    }else if(str == "%="){
        cout << "Modulus assignment, Assignment Operator" << endl;
    }else if(str == "%="){
        cout << "Modulus assignment, Assignment Operator" << endl;
    }else if(str == "&&"){
        cout << "and, Logical Operator" << endl;
    }else if(str == "||"){
        cout << "or, Logical Operator" << endl;
    }else if(str == "!"){
        cout << "not, Logical Operator" << endl;
    }else if(str == "&"){
        cout << "Bitwise and, Bitwise Operator" << endl;
    }else if(str == "|"){
        cout << "Bitwise or, Bitwise Operator" << endl;
    }else if(str == "^"){
        cout << "Bitwise or, Bitwise Operator" << endl;
    }else if(str == "~"){
        cout << "Binary One's Complement, Bitwise Operator" << endl;
    }else if(str == "<<"){
        cout << "Binary Shift Left, Bitwise Operator" << endl;
    }else if(str == ">>"){
        cout << "Binary right shift, Bitwise Operator" << endl;
    }else if(str == "++"){
        cout << "Increment, Unary Operator" << endl;
    }else if(str == "--"){
        cout << "Decrement, Unary Operator" << endl;
    }else if(str == "?:"){
        cout << "Ternary, Ternary Operator" << endl;
    }else{
        cout << "Not an operator" << endl;
    }
}

int  main(){
    string input;
    cout << "Please Enter an Operator: " ;
    getline(cin, input);

    checkOperator(input);

}
