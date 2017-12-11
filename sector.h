#pragma once
#ifndef __SECTOR_H__
#define __SECTOR_H__

#define _USE_MATH_DEFINES
#include <cmath>


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

public ref class Sector {
private:
	Drawing::Graphics^ srcGr;
	SolidBrush^ BrushForFill;
	SolidBrush^ BrushForUnFill;
	Pen^ pen;
	float FirstAngle;
	float LastAngle;
	float x;
	float y;
	float height;
	float width;
public:
	Sector(Drawing::Graphics^ _srcGr, SolidBrush^ _BrushForFill, SolidBrush^ _BrushForUnFill, Pen^ _pen, float _FirstAngle,
		float _LastAngle, float _x, float _y, float _height, float _width);
	~Sector();
	System::Void DrawSector(SolidBrush^ Brush);
	System::Void DrawBorder();
};

#endif // !__SECTOR_H__