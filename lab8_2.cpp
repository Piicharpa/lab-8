#include <iostream>
using namespace std;

int main() {
    
    string name, movie, date;
    int stu_id;
    
    cout << "Fasai: " << "Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    cin >> name;
    cout << "Fasai: " << "Wow!!! " << name <<" is a really cool name.\n";
    
    cout << "Fasai: " << "I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> stu_id;
    cout << "Fasai: " << "I think you may be GEAR " << (stu_id/10000000)-12 << ". I have a free movie ticket for you.\n";
    cout << "Fasai: " << " Let's go to the cinema together!!!\n";
    
    cout << "Fasai: " << "What movie do you want to watch?\n";
    cout << name << ": ";
    cin >> movie;
   
    cout << "Fasai: " << "So....which day are you free to go with me?\n";
    cout << name << ": ";
    cin >> date;
    cout << "Fasai: " << date <<"....that is OK!!! I'm looking forward to watching " << movie <<" with you.\n";
    
    cout << name << ": " << "May the Force be with you krub\n";
    cout << "Fasai: " << "555+ see you "<< date << ". Bye Bye \(^ ^)/";
    
    return 0;
}
