#include<iostream>
#include<cstring>
using namespace std;

bool isArithmethic(string ope){
    string arithmethicOperators[] = {"+","-","*","/","%"};

    for (string operators: arithmethicOperators){
        if(operators == ope){
            return true;
        }
    }

    return false;
}

bool isRelationalOperators(string ope){
    string relationalOperators[] = {"<",">","<=",">=","==","!="};

    for (string operators: relationalOperators){
        if (operators == ope)
        {
            return true;
        }
    
    }

    return false;
}

bool isAssignmentOperators(string ope){
    string assignmentOperators[] = {"=","+=","-=","*=","/=","%="};
    for (string operators: assignmentOperators){
        if (operators == ope)
        {
            return true;
        }
    
    }

    return false;
}

bool isLogicalOperators(string ope){
    string logicalOperators[] = {"&&","||"};
    for (string operators: logicalOperators){
        if (operators == ope)
        {
            return true;
        }
    
    }

    return false;
}

bool isBitwiseOperators(string ope){
    string bitwiseOperators[] = {"&","|","^"};
    for (string operators: bitwiseOperators){
        if (operators == ope)
        {
            return true;
        }
    
    }

    return false;
}

int main(){
    string input;
    cout << "Please Ener to chek given string is operator or not:";
    getline(cin,input);

    if(isArithmethic(input)){
        cout << input << " is an Arithmethic Operator" << endl;
    }else if(isAssignmentOperators(input)){
         cout << input << " is an Assignment Operator" << endl;
    }else if(isRelationalOperators(input)){
         cout << input << " is a Relational Operator" << endl;
    }else if(isLogicalOperators(input)){
         cout << input << " is a Logical Operator" << endl;
    }else if(isBitwiseOperators(input)){
         cout << input << " is a Bitwise Operator" << endl;
    }else{
         cout << input << " is not an Operator" << endl;
    }
}