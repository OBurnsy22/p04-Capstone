#include "Editor.h"
#include<string>
#include<vector>
#include<fstream>
#include<iostream>

using namespace std;

vector <vector <Pixel> > Editor::blackAndWhite( vector <vector <Pixel> > canvas)
{
int temporary;
Pixel rgb;
Bitmap image;

for(int x=0; x<canvas.size(); x++)
{
    for(int y=0; y<canvas[x].size(); y++)
    {
    rgb = canvas[x][y];
    temporary = (rgb.red + rgb.green + rgb.blue)/ 3;
    rgb.red = temporary;
    rgb.green = temporary;
    rgb.blue = temporary;
    canvas[x][y] = rgb;
    }
}
cout<<"Success!"<<endl;
ofstream myfile;
myfile.open ("changes.txt", fstream::app);
myfile<<"You have applied the Black and White filter."<<endl;
myfile.close();

return canvas;
}

vector <vector <Pixel> > Editor::bayer( vector <vector <Pixel> > canvas2)
{
Pixel rgb;
Bitmap image;

for(int x=0; x<canvas2.size(); x++)
{
    for(int y=0; y<canvas2[x].size(); y++)
    {
    rgb = canvas2[x][y];
    rgb.red = rgb.red * .25;
    rgb.green = rgb.green * .50;
    rgb.blue = rgb.blue * .25;
    canvas2[x][y] = rgb;
    }
}
cout<<"Success!"<<endl;
ofstream myfile;
myfile.open ("changes.txt", fstream::app);
myfile<<"You have applied the Bayer filter."<<endl;
myfile.close();

return canvas2;
}

vector <vector <Pixel> > Editor::negative( vector <vector <Pixel> > canvas3)
{
Pixel rgb;
Bitmap image;

for(int x=0; x<canvas3.size(); x++)
{
    for(int y=0; y<canvas3[x].size(); y++)
    {
    rgb = canvas3[x][y];
    rgb.red = 255 - rgb.red;
    rgb.green = 255 - rgb.green;
    rgb.blue = 255 - rgb.blue;
    canvas3[x][y] = rgb;
    }
}
cout<<"Success!"<<endl;
ofstream myfile;
myfile.open ("changes.txt", fstream::app);
myfile<<"You have applied the inverted filter."<<endl;
myfile.close();

return canvas3;
}

vector <vector <Pixel> > Editor::lomo( vector <vector <Pixel> > canvas4)
{
Pixel rgb;
Bitmap image;
int temp;

for(int x=0; x<canvas4.size(); x++)
{
    for(int y=0; y<canvas4[x].size(); y++)
    {
    rgb = canvas4[x][y];
    rgb.red = rgb.red / 2;
    rgb.green = rgb.green / 2;
    rgb.blue = rgb.blue / 3;
    canvas4[x][y] = rgb;
    }
}
cout<<"Success!"<<endl;
ofstream myfile;
myfile.open("changes.txt", fstream::app);
myfile<<"You have applied the Lomographic filter."<<endl;
myfile.close();

return canvas4;
}

vector <vector <Pixel> > Editor::border(vector <vector <Pixel> > borderMe)
{

string color;

cout<<"What color would you like your border to be?"<<endl;
cout<<"(White/Black)"<<endl;
cin>>color;

while(color != "White" && color != "white" && color != "Black" && color != "black")
{
    cout<<"ERROR: Please enter a valid option."<<endl;
    cout<<"(White/Black)"<<endl;
    cin>>color;
}

if(color == "Black" || color == "black")
{

int thick = 8;

for(int r = 0; r<borderMe.size(); r++)
{
    for(int c = 0; c<borderMe[r].size(); c++)
    {
        if(r >= 0 && r <= thick - 1 || r >= borderMe.size() - thick - 1 && r <= borderMe.size() - 1 || c >= borderMe[0].size() - thick - 1 && c <= borderMe[0].size() - 1 || c >= 0 && c <= thick - 1)
        {
            rgb = borderMe[r][c];
            rgb.red = 0;
            rgb.green = 0;
            rgb.blue = 0;
            borderMe[r][c] = rgb;
        }
    }
}
cout<<"Success!"<<endl;
ofstream myfile;
myfile.open("changes.txt", fstream::app);
myfile<<"You have applied a black border."<<endl;
myfile.close();

return borderMe;
}

if(color == "White" || color == "white")
{

int thick = 8;

for(int r = 0; r<borderMe.size(); r++)
{
    for(int c = 0; c<borderMe[r].size(); c++)
    {
        if(r >=0 && r <= thick - 1 || r >= borderMe.size() - thick - 1 && r <= borderMe.size() - 1 || c >= borderMe[0].size() - thick - 1 && c <= borderMe[0].size() - 1 || c >= 0 && c <= thick - 1)
        {
            rgb = borderMe[r][c];
            rgb.red = 255;
            rgb.green = 255;
            rgb.blue = 255;
            borderMe[r][c] = rgb;
        }
    }  

}
cout<<"Success!"<<endl;
ofstream myfile;
myfile.open("changes.txt", fstream::app);
myfile<<"You have applied a white border."<<endl;
myfile.close();

return borderMe;
}

}

void Editor::imgSave( vector <vector <Pixel> > & saveMe)
{
Bitmap image;

image.fromPixelMatrix(saveMe);
image.save("Edited.bmp");

cout<<"Your image has been saved as, 'Edited.bmp'."<<endl;
}
