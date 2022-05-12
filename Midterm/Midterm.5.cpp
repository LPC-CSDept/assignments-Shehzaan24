#include <iostream>
#include <fstream>
using namespace std;

void getInput(int* a, int* b){
    cout<<"Enter value of n1 : ";
    cin>>*a;
    cout<<"Enter value of n2 : ";
    cin>>*b;
}

int isSame(int* a, int* b){
    if (*a == *b){
        return 1;
    }
}

float intDivision(int* a, int* b){
    if (*a > *b){
        cout<<"\nDividing n1/n2..";
        return float(*a) / float(*b);
    }
    else {
        cout<<"\nDividing n2/n1..";
        return float(*b) / float(*a);
    }
}

void fileWrite (float result){
    //open file for writing
    ofstream fw("D:\\question5.txt", std::ofstream::out);
    //writing to file
    cout<<"\n\nWriting to file..";
    fw << result << "\n";
    fw.close();
}


int main(){
    int n1, n2;
    float result;
    
    //read input from keyboard
    getInput(&n1,&n2);
    
    //check if both numbers are same, then exit
    if (isSame(&n1,&n2)==1){   
        cout<<"\n  The numbers are equal";
        exit;
    }
    
    //otherwise compute division as larger/smaller number
    else { 
        result = intDivision(&n1,&n2);
        cout<<"\n  Result of Division = "<< result;
    }
    
    //write result in a text file
    fileWrite(result);
    
    exit;
}