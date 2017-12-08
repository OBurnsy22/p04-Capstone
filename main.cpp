//Matthew Burns
#include<iostream>
#include<string>
#include<vector>
#include"bitmap.h"
#include<fstream>
#include "Editor.h"

using namespace std;

int main(){

Editor photoshop;
char filter;
string border;
string fileName;
bool validBmp;
Bitmap image;
vector <vector <Pixel> > bmp;

cout<<"Hello, please enter the filename of an image (must be in Windows BMP format): "<<endl;
cin>>fileName;

image.open(fileName);
validBmp = image.isImage();

while(validBmp == false)
{
    cout<<"ERROR: Please enter a valid bmp file name."<<endl;
    cin>>fileName;

    image.open(fileName);
    validBmp = image.isImage();
}

if(validBmp == true)
{

    bmp = image.toPixelMatrix();
    int stop = 1;

    do{

    cout<<"What filter would you like to apply to your image? (You can apply multiple, although it may not make an optimal outcome)"<<endl;
    cout<<"(A): Black and White Filter."<<endl;
    cout<<"(B): Bayer Filter."<<endl;
    cout<<"(C): Negative Filter."<<endl;
    cout<<"(D): Lomographic Filter."<<endl;
    cout<<"Please enter either option A,B,C,D, or type 'F' if you are finished: "<<endl;
    cin>>filter;

        while(filter != 'A' && filter != 'a' && filter != 'B' && filter != 'b' && filter != 'C' && filter != 'c' && filter != 'D' && filter != 'd' && filter != 'F' && filter != 'f')
        {
            cout<<"ERROR: Please enter a valid option: ";
            cin>>filter;
        }

        if(filter == 'A' || filter == 'a')
        {
            bmp = photoshop.blackAndWhite(bmp);
        }

        else if(filter == 'B' || filter == 'b')
        {
            bmp = photoshop.bayer(bmp);
        }       

        else if(filter == 'C' || filter == 'c')
        {
            bmp = photoshop.negative(bmp);
        }  

        else if(filter == 'D' || filter == 'd')
        {
            bmp = photoshop.lomo(bmp);
        }

        else if(filter == 'F' || filter == 'f')
        {
            stop++;
        }
        
       }while(stop == 1);


cout<<"Would you like to add a border to your image?"<<endl;
cout<<"(Yes/No)"<<endl;
cin>>border;

if(border == "Yes" || border == "yes" )
{
    bmp = photoshop.border(bmp);
}

string line;
ifstream myfile;
myfile.open ("changes.txt");
while( getline (myfile,line) )
{
        cout<<line<<endl;
}
myfile.close();

photoshop.imgSave(bmp);

}

return 0;
}






