/* Define a class Interest with following specifications:
a. Data Members
i. principal
ii. time
iii. rate
b. Member Functions
i. getdata() to assign initial values
ii. display () to display values
iii. Findinterest() to find and display the interest
*/
#include<iostream>
using namespace std;
class Interest{
    int principal;
    int time;
    int rate;
    public:
    void getdata(){
        cout<<"Enter the principal,rate,and time"<<endl;
        cin>>principal>>rate>>time;
    }
    int Findinterest(){
        int interest=(principal*time*rate)/100;
        return interest;
    }
    void display(){
        int interest=Findinterest();
     cout << "The simple interest is: " << interest << endl;
    }
};
int main(){
    Interest I1;
    I1.getdata();
    I1.Findinterest();
    I1.display();
    return 0;
}