#ifndef _EDITOR_H_
#define _EDITOR_H_
#include<vector>
#include"bitmap.h"

using namespace std;

class Editor
{
private:


public:
Pixel rgb;

vector <vector <Pixel> > blackAndWhite ( vector <vector <Pixel> >);

vector <vector <Pixel> > bayer ( vector <vector <Pixel> >);

vector <vector <Pixel> > negative ( vector <vector <Pixel> >);

vector <vector <Pixel> > lomo ( vector <vector <Pixel> >);

vector <vector <Pixel> > border (vector <vector <Pixel> >);

void imgSave(vector <vector <Pixel> >);

};

#endif
