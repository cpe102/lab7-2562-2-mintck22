//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>
using namespace std;

int main(){

    int age;
    float money;

    cout << "Age: ";
    cin >> age;

    if(age <= 20){

        float heigh;
        cout << "Heigh: ";
        cin >> heigh;

        if(heigh < 160){
            cout << "status = UNFREIND";
        }
        else if(heigh < 175){
            cout << "status = FREIND";
        }
        else{
            //float money;
            cout << "Money: ";
            cin >> money;

            if(money > 69000000){
                cout << "status = MARRIED";
            }else
            {
                cout << "status = ONE-NIGHT-STAND";
            }
            
        }
    }
    else if(age < 30){
            
        cout << "Money: ";
        cin >> money;
        if(money > 10000000){
            cout << "status = BEST FREIND";
        }else
        {
            cout << "status = UNFREIND";
        }
    }else
    {
        cout << "status = UNFREIND";
    }
    

    return 0;
}