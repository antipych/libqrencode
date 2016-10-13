#pragma once

#include <vector>
#include <string>
#include "qrencode.h"

struct BitmapOption
{
	struct
	{
		unsigned char red, green, blue;
	}color;

	int pixel;
	int compression;

	// default
	BitmapOption() 
	{
		color.red = 0;
		color.green = 0;
		color.blue = 0;
		pixel = 8;
		compression = 0;
	}
};

struct QRCodeOption
{
	const char* text;
	QRecLevel level;
	QRencodeMode mode;
	bool casesensitive;

	QRCodeOption()
	{
		text = NULL;
		level = QR_ECLEVEL_H;
		mode = QR_MODE_8;
		casesensitive = true;
	}
};

bool QRCodeBitmap(const QRCodeOption* qrcodeOption, BitmapOption* bitmapOption, std::vector<char>* result);
