#include<iostream>
#include<cstring>
using namespace std;

void shortest_route(char a[])
{
    int x =0,y=0;
    for(int i=0; a[i]!='\0';i++)
    {
        switch (a[i])
        {
        case 'N': y++;
                break;
        case 'S': y--;
                 break;
        case 'E': x++;
                 break;
        case 'W': x--;
                break;
        }

        
    }
    cout<<"("<<x<<" , "<<y<<")"<<endl;

    if (x>0 and y>0)
    {
        while (y--)
        {
            cout<<"N";
        }
        while (x--)
        {
            cout<<"E";
        }
        
    }
    else if(x<0 and y>0)
    {
        while (y--)
        {
            cout<<"N";
        }
        while (x++)
        {
            cout<<"W";
        }
    }
    else if (x>0 and y<0)
    {
        while (y++)
        {
            cout<<"S";
        }
        while (x--)
        {
            cout<<"E";
        }
    }
    else if (x<0 and y<0)
    {
        while (y++)
        {
            cout<<"S";
        }
        while (x++)
        {
            cout<<"W";
        }
    }
}

int main()
{
    char route[1000];
    cout<<"Type : ";
    cin.get(route,1000);
    shortest_route(route);

}