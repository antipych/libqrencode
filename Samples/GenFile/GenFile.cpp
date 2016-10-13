#include "stdafx.h"
#include "../../qrcodebitmap.h"

#define OUT_FILE "qrcode.bmp" // Output file name

int _tmain(int argc, _TCHAR* argv[])
{
	std::string dataToEncode("https://github.com/antipych/libqrencode");
	std::vector<char> bitmapVector;
	QRCodeOption qrcodeOption;
	BitmapOption bitmapOption;

	qrcodeOption.text = dataToEncode.c_str();

	bool bitmapSuccess = QRCodeBitmap(&qrcodeOption, &bitmapOption, &bitmapVector);

	// Output the bmp file
	FILE *f = fopen(OUT_FILE, "w");
	if (f)
	{
		fwrite(&bitmapVector[0], sizeof(unsigned char), bitmapVector.size(), f);
		fclose(f);
	}
	else
	{
		printf("Unable to open file");
		exit(-1);
	}
	return 0;
}


