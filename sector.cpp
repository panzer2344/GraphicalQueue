#include "sector.h"


Sector::Sector(Drawing::Graphics^ _srcGr, SolidBrush^ _BrushForFill, SolidBrush^ _BrushForUnFill, Pen^ _pen, float _FirstAngle,
	float _LastAngle, float _x, float _y, float _height, float _width) {
	srcGr = _srcGr;
	BrushForFill = _BrushForFill;
	BrushForUnFill = _BrushForUnFill;
	FirstAngle = _FirstAngle;
	LastAngle = _LastAngle;
	x = _x;
	y = _y;
	height = _height;
	width = _width;
	pen = _pen;

}

Sector::~Sector() {
}

System::Void Sector::DrawSector(SolidBrush^ Brush) {
	float partofwidth = width / 3;
	float partofheight = height / 3;
	float DifAngle = LastAngle - FirstAngle;
	
	srcGr->FillPie(Brush, x, y, width, height, FirstAngle, DifAngle);
	srcGr->FillPie(BrushForUnFill, x + partofwidth, y + partofheight, partofwidth, partofheight, FirstAngle, DifAngle);
}

System::Void Sector::DrawBorder() {
	float partofwidth = width / 3;
	float partofheight = height / 3;
	float bigRadius = width / 2;
	float smallRaidus = partofwidth / 2;
	float centerX = x + bigRadius;
	float centerY = y + bigRadius;
	float startAngle = FirstAngle * 2 * M_PI / 360;
	float endAngle = LastAngle * 2 * M_PI / 360;
	float DifAngle = LastAngle - FirstAngle;

	srcGr->DrawArc(pen, x, y, width, height, FirstAngle, DifAngle);
	srcGr->DrawArc(pen, x + partofwidth, y + partofheight, partofwidth, partofheight, FirstAngle, LastAngle);
	srcGr->DrawLine(pen, centerX + smallRaidus * cos(startAngle), centerY + smallRaidus * sin(startAngle),
		centerX + bigRadius * cos(startAngle), centerY + bigRadius * sin(startAngle));
	srcGr->DrawLine(pen, centerX + smallRaidus * cos(endAngle), centerY + smallRaidus * sin(endAngle),
		centerX + bigRadius * cos(endAngle), centerY + bigRadius * sin(endAngle));
}

