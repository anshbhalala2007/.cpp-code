#include <iostream>
using namespace std;

class rectangle
{   int id;
    int lenght;
    int breath;
    public :
        void set_dimension()
        {
            cin >> id;
            cout << "Enter lenght : ";
            cin >> lenght;
            cout << "Enter breath : ";
            cin >> breath;
        }
        int area()
        {
            return lenght*breath;
        }
        int perimeter()
        {
            return 2*(lenght + breath);
        }
        void update()
        {
            cout<<"Enter lenght : ";
            cin >> lenght;
            cout <<"Enter Breath : ";
            cin >> breath;
            cout <<"Rectangle with id "<<id<<" Updated sucessfuly"<<endl;
        }
        int checkint(int idno)
        {
            if(id == idno)
            {
                return 1;
            }
        }
};

int main()
{
    rectangle r[5];
    int i;
    int rectangle_count = 0;
    do
    {
    cout<<"Enter 1 to add a rectangel"<<endl;
    cout<<"Enter 2 to update dimension of rectangle"<<endl;
    cout<<"Enter 3 to find primeter"<<endl;
    cout<<"Enter 4 to find area"<<endl;
    cout<<"Enter 0 to exit"<<endl;
    cout<<"Enter your choice : ";
    cin >> i;
    switch(i)
    {
        case 1:
            r[rectangle_count].set_dimension();
            rectangle_count++;
            break;

        case 2:

            int id;
            cout <<"Enter rectandle id to updated :";
            cin>>id;
            for(int i ; i<rectangle_count ; i++)
            {
                if(r[i].check(id))
                {
                    r[i].update();
                    break;
                }
                else if(i == count-1)
                {
                    cout<<"NO rectangles with matching id found";
                }
            }
        case 3:
            cout <<"Enter rectandle ID :";
            cin>>id;
            r


    }
    }
    while(i !=0);

}
