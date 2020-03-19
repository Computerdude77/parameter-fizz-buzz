#include <iostream>
#include <cstdlib>
using namespace std; 

bool legal_int(char *str) {
    if (*str == '-'){
        return true;}
    if (!isdigit(*str++)){
         return false;}
    return true;
}

int main(int argc, char *argv[]) 
{
    int number = 0;
    if (argc != 2){
        cout << "Give me one parameter that is a number!" << endl;
        return 1;}
    if( (legal_int(argv[1]) == false) ){
        cout << "You gave me one parameter, but it is not an integer!" << endl;
    }
    number = atoi(argv[1]);
    if (number < 0){
        while (number != 0){
            cout << number << " ";
            if (number % 3 == 0 && number % 4 == 0){
                cout << "fuzz buzz" << endl;
                goto positive;}
            if (number % 3 == 0){
                cout << "fizz" << endl;
                goto positive;}
            if (number % 4 == 0){
                cout << "buzz" << endl;
                goto positive;}
            cout << endl;
            positive:
            number++;
        }
        return 0;
    }
    if (number > 0){
        while (number != 0){
            cout << number << " ";
            if (number % 3 == 0 && number % 4 == 0){
                cout << "fuzz buzz" << endl;
                goto negative;}
            if (number % 3 == 0){
                cout << "fizz" << endl;
                goto negative;}
            if (number % 4 == 0){
                cout << "buzz" << endl;
                goto negative;}
            cout << endl;
            negative:
            number--;
        }
        return 0;
    }
    return 1;
}