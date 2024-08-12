/* 
14.Define a class Room with following specifications:
a. Data Members
i. length
ii. width
b. Member Functions
i. getdata() to assign initial values
ii. display () to display length and width
iii. area () to find and display the area
*/

#include<iostream>
using namespace std;
class Room{
    int length;
    int width;
    public:
    void getdata(){
        cout<<"Enter the length and width"<<endl;
        cin>>length>>width ;
    }
    int area(){
        int Area=length*width;
        return Area;
    }
    void display(){
        int Area=area();
     cout << "The Area is: " << Area << endl;
    }
};
int main(){
    Room R;
    R.getdata();
    R.area();
    R.display();
    return 0;
}