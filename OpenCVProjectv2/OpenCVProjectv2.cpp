//base http://opencv-srf.blogspot.com/2010/09/object-detection-using-color-seperation.html
#include "stdafx.h"
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <vector>
#include <conio.h> 
#include "opencv2/imgproc/imgproc.hpp"
#include <Windows.h>

using namespace cv;
using namespace std;

void userInterface(Mat imgTmp, Mat imgOriginal)
{
	Mat imgLines2 = Mat::zeros(imgTmp.size(), CV_8UC3);;

	enum fontPick
	{
		FONT_HERSHEY_SIMPLEX = 0,
		FONT_HERSHEY_PLAIN = 1,
		FONT_HERSHEY_DUPLEX = 2,
		FONT_HERSHEY_COMPLEX = 3,
		FONT_HERSHEY_TRIPLEX = 4,
		FONT_HERSHEY_COMPLEX_SMALL = 5,
		FONT_HERSHEY_SCRIPT_SIMPLEX = 6,
		FONT_HERSHEY_SCRIPT_COMPLEX = 7,
		FONT_ITALIC = 16
	};

	int fontFace = fontPick(2);
	double fontScale = 1;
	int thickness = 4;
	int thicknessB = 6;
	Scalar textColor = Scalar(0, 0, 0);
	Scalar lineColor = Scalar(255, 255, 255);
	Scalar textColorB = Scalar(255, 255, 255);
	Scalar lineColorB = Scalar(0, 0, 0);
	int lineType = 3;
	int lineTypeB = 5;


	string one = "1";
	string two = "2";
	string three = "3";
	string four = "4";
	string five = "5";
	string six = "6";
	string seven = "7";
	string eight = "8";
	string nine = "9";
	string zero = "0";
	string plus = "+";
	string minus = "-";
	string multiplier = "*";
	string divisor = "/";
	string equal = "=";
	string C = "C";
	string i = "I";

	Point oneOrg(32, 30);
	Point twoOrg(97, 30);
	Point threeOrg(162, 30);
	Point fourOrg(227, 30);
	Point fiveOrg(292, 30);
	Point sixOrg(357, 30);
	Point sevenOrg(422, 30);
	Point eightOrg(487, 30);
	Point nineOrg(552, 30);
	Point zeroOrg(617, 30);
	Point plusOrg(65, 450);
	Point minusOrg(195, 450);
	Point multiplierOrg(325, 450);
	Point divisorOrg(455, 450);
	Point equalOrg(585, 450);
	Point COrg(25, 230);
	Point iOrg(27, 180);

	//Size textSize = getTextSize(one, fontFace, fontScale, thickness, &baseline);

	putText(imgOriginal, one, oneOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, two, twoOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, three, threeOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, four, fourOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, five, fiveOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, six, sixOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, seven, sevenOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, eight, eightOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, nine, nineOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, zero, zeroOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, plus, plusOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, minus, minusOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, multiplier, multiplierOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, divisor, divisorOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, equal, equalOrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, C, COrg, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, i, iOrg, fontFace, fontScale, textColorB, thicknessB, 8);

	putText(imgOriginal, one, oneOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, two, twoOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, three, threeOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, four, fourOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, five, fiveOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, six, sixOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, seven, sevenOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, eight, eightOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, nine, nineOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, zero, zeroOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, plus, plusOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, minus, minusOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, multiplier, multiplierOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, divisor, divisorOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, equal, equalOrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, C, COrg, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, i, iOrg, fontFace, fontScale, textColor, thickness, 8);

	// linie gora
	line(imgOriginal, Point(1, 50), Point(650, 50), lineColorB, lineTypeB);
	line(imgOriginal, Point(65, 1), Point(65, 50), lineColorB, lineTypeB);
	line(imgOriginal, Point(130, 1), Point(130, 50), lineColorB, lineTypeB);
	line(imgOriginal, Point(195, 1), Point(195, 50), lineColorB, lineTypeB);
	line(imgOriginal, Point(260, 1), Point(260, 50), lineColorB, lineTypeB);
	line(imgOriginal, Point(325, 1), Point(325, 50), lineColorB, lineTypeB);
	line(imgOriginal, Point(390, 1), Point(390, 50), lineColorB, lineTypeB);
	line(imgOriginal, Point(455, 1), Point(455, 50), lineColorB, lineTypeB);
	line(imgOriginal, Point(520, 1), Point(520, 50), lineColorB, lineTypeB);
	line(imgOriginal, Point(585, 1), Point(585, 50), lineColorB, lineTypeB);

	line(imgOriginal, Point(1, 50), Point(650, 50), lineColor, lineType);
	line(imgOriginal, Point(65, 1), Point(65, 50), lineColor, lineType);
	line(imgOriginal, Point(130, 1), Point(130, 50), lineColor, lineType);
	line(imgOriginal, Point(195, 1), Point(195, 50), lineColor, lineType);
	line(imgOriginal, Point(260, 1), Point(260, 50), lineColor, lineType);
	line(imgOriginal, Point(325, 1), Point(325, 50), lineColor, lineType);
	line(imgOriginal, Point(390, 1), Point(390, 50), lineColor, lineType);
	line(imgOriginal, Point(455, 1), Point(455, 50), lineColor, lineType);
	line(imgOriginal, Point(520, 1), Point(520, 50), lineColor, lineType);
	line(imgOriginal, Point(585, 1), Point(585, 50), lineColor, lineType);

	// linie dol

	line(imgOriginal, Point(1, 400), Point(650, 400), lineColorB, lineTypeB);
	line(imgOriginal, Point(130, 400), Point(130, 500), lineColorB, lineTypeB);
	line(imgOriginal, Point(260, 400), Point(260, 500), lineColorB, lineTypeB);
	line(imgOriginal, Point(390, 400), Point(390, 500), lineColorB, lineTypeB);
	line(imgOriginal, Point(520, 400), Point(520, 500), lineColorB, lineTypeB);

	line(imgOriginal, Point(1, 400), Point(650, 400), lineColor, lineType);
	line(imgOriginal, Point(130, 400), Point(130, 500), lineColor, lineType);
	line(imgOriginal, Point(260, 400), Point(260, 500), lineColor, lineType);
	line(imgOriginal, Point(390, 400), Point(390, 500), lineColor, lineType);
	line(imgOriginal, Point(520, 400), Point(520, 500), lineColor, lineType);

	// linia lewo
	line(imgOriginal, Point(1, 150), Point(50, 150), lineColorB, lineTypeB);
	line(imgOriginal, Point(1, 200), Point(50, 200), lineColorB, lineTypeB);
	line(imgOriginal, Point(50, 150), Point(50, 250), lineColorB, lineTypeB);
	line(imgOriginal, Point(1, 250), Point(50, 250), lineColorB, lineTypeB);

	line(imgOriginal, Point(1, 150), Point(50, 150), lineColor, lineType);
	line(imgOriginal, Point(1, 200), Point(50, 200), lineColor, lineType);
	line(imgOriginal, Point(50, 150), Point(50, 250), lineColor, lineType);
	line(imgOriginal, Point(1, 250), Point(50, 250), lineColor, lineType);
}

void updatePosition(int &waitFrame, int &choice, int iLastX, int iLastY)
{
	Sleep(33);

	if (iLastX > 520 && iLastX < 650 && iLastY > 400 && iLastY < 500)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 11;
		}
	}
	else if (iLastX > 390 && iLastX < 520 && iLastY > 400 && iLastY < 500)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 12;
		}
	}
	else if (iLastX > 260 && iLastX < 390 && iLastY > 400 && iLastY < 500)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 13;
		}
	}
	else if (iLastX > 130 && iLastX < 260 && iLastY > 400 && iLastY < 500)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 14;
		}
	}
	else if (iLastX > 1 && iLastX < 130 && iLastY > 400 && iLastY < 500)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 15;
		}
	}

	else if (iLastX > 600 && iLastX < 650 && iLastY > 200 && iLastY < 250)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 16;
		}
	}

	else if (iLastX > 585 && iLastX < 650 && iLastY > 1 && iLastY < 50)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 1;
		}
	}

	else if (iLastX > 520 && iLastX < 585 && iLastY > 1 && iLastY < 50)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 2;
		}
	}

	else if (iLastX > 455 && iLastX < 520 && iLastY > 1 && iLastY < 50)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 3;
		}
	}

	else if (iLastX > 390 && iLastX < 455 && iLastY > 1 && iLastY < 50)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 4;
		}
	}

	else if (iLastX > 325 && iLastX < 390 && iLastY > 1 && iLastY < 50)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 5;
		}
	}

	else if (iLastX > 260 && iLastX < 325 && iLastY > 1 && iLastY < 50)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 6;
		}
	}

	else if (iLastX > 195 && iLastX < 260 && iLastY > 1 && iLastY < 50)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 7;
		}
	}

	else if (iLastX > 130 && iLastX < 195 && iLastY > 1 && iLastY < 50)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 8;
		}
	}

	else if (iLastX > 65 && iLastX < 130 && iLastY > 1 && iLastY < 50)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 9;
		}
	}

	else if (iLastX > 1 && iLastX < 65 && iLastY > 1 && iLastY < 50)
	{
		waitFrame++;
		if (waitFrame > 3)
		{
			choice = 10;
		}
	}
	else
	{
		waitFrame = 0;
		choice = 0;
	}
}

void firstNumPick(int &firstNum, Mat imgOriginal, int &choice)
{

	switch (choice)
	{
	case 1:
		firstNum = 1;
		break;
	case 2:
		firstNum = 2;
		break;
	case 3:
		firstNum = 3;
		break;
	case 4:
		firstNum = 4;
		break;
	case 5:
		firstNum = 5;
		break;
	case 6:
		firstNum = 6;
		break;
	case 7:
		firstNum = 7;
		break;
	case 8:
		firstNum = 8;
		break;
	case 9:
		firstNum = 9;
		break;
	case 10:
		firstNum = 0;
		break;
	default: ;
	}
}

void operationPick(int &operation, Mat imgOriginal, int &choice)
{
	switch (choice)
	{
	case 11:
		operation = 11;
		break;
	case 12:
		operation = 12;
		break;
	case 13:
		operation = 13;
		break;
	case 14:
		operation = 14;
		break;
	default: ;
	}
}

void secondNumPick(int &secondNum, Mat imgOriginal, int &choice)
{
	switch (choice)
	{
	case 1:
		secondNum = 1;
		break;
	case 2:
		secondNum = 2;
		break;
	case 3:
		secondNum = 3;
		break;
	case 4:
		secondNum = 4;
		break;
	case 5:
		secondNum = 5;
		break;
	case 6:
		secondNum = 6;
		break;
	case 7:
		secondNum = 7;
		break;
	case 8:
		secondNum = 8;
		break;
	case 9:
		secondNum = 9;
		break;
	case 10:
		secondNum = 0;
		break;
	default: ;
	}
}

void showFirstNum(int firstNum, Mat imgOriginal, Scalar colorPicked)
{
	int fontFace = FONT_HERSHEY_DUPLEX;
	double fontScale = 3;
	int thickness = 4;
	int thicknessB = 6;
	Scalar textColor = Scalar(0, 0, 0);
	Scalar textColorB = colorPicked;
	Point pointFirstNum(5, 370);

	string pick = to_string(firstNum);
	putText(imgOriginal, pick, pointFirstNum, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, pick, pointFirstNum, fontFace, fontScale, textColor, thickness, 8);
}

void showOperation(int operation, Mat imgOriginal, Scalar colorPicked)
{
	int fontFace = FONT_HERSHEY_DUPLEX;
	double fontScale = 3;
	int thickness = 4;
	int thicknessB = 6;
	Scalar textColor = Scalar(0, 0, 0);
	Scalar textColorB = colorPicked;
	Point pointFirstNum(70, 370);
	string pick;
	if (operation == 11)
	{
		pick = "+";
	}
	if (operation == 12)
	{
		pick = "-";
	}
	if (operation == 13)
	{
		pick = "*";
	}
	if (operation == 14)
	{
		pick = "/";
	}
	putText(imgOriginal, pick, pointFirstNum, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, pick, pointFirstNum, fontFace, fontScale, textColor, thickness, 8);

}

void showSecondNum(int secondNum, Mat imgOriginal, Scalar colorPicked)
{
	int fontFace = FONT_HERSHEY_DUPLEX;
	double fontScale = 3;
	int thickness = 4;
	int thicknessB = 6;
	Scalar textColor = Scalar(0, 0, 0);
	Scalar textColorB = colorPicked;
	Point pointSecondNum(140, 370);

	string pick = to_string(secondNum);
	putText(imgOriginal, pick, pointSecondNum, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, pick, pointSecondNum, fontFace, fontScale, textColor, thickness, 8);
}

void showResult(float result, Mat imgOriginal, Scalar colorPicked)
{
	int fontFace = FONT_HERSHEY_DUPLEX;
	double fontScale = 3;
	int thickness = 4;
	int thicknessB = 6;
	Scalar textColor = Scalar(0, 0, 0);
	Scalar textColorB = colorPicked;
	Point pointResultNum(300, 370);
	Point pointEqualSign(220, 370);

	string equalSign = "=";
	string pick = to_string(result);
	putText(imgOriginal, equalSign, pointEqualSign, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, equalSign, pointEqualSign, fontFace, fontScale, textColor, thickness, 8);
	putText(imgOriginal, pick, pointResultNum, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, pick, pointResultNum, fontFace, fontScale, textColor, thickness, 8);

}

void newShowError(string error, Mat imgOriginal, int &ifShowError, string &newError)
{
	enum fontPick
	{
		FONT_HERSHEY_SIMPLEX = 0,
		FONT_HERSHEY_PLAIN = 1,
		FONT_HERSHEY_DUPLEX = 2,
		FONT_HERSHEY_COMPLEX = 3,
		FONT_HERSHEY_TRIPLEX = 4,
		FONT_HERSHEY_COMPLEX_SMALL = 5,
		FONT_HERSHEY_SCRIPT_SIMPLEX = 6,
		FONT_HERSHEY_SCRIPT_COMPLEX = 7,
		FONT_ITALIC = 16
	};

	int fontFace = fontPick(2);
	double fontScale = 1;
	int thickness = 1;
	int thicknessB = 3;
	Scalar textColor = Scalar(30, 222, 30);
	Scalar textColorB = Scalar(0, 0, 0);
	Point pointErrorBox(1, 80);
	ifShowError = 1;
	putText(imgOriginal, newError, pointErrorBox, fontFace, fontScale, textColorB, thicknessB, 8);
	putText(imgOriginal, newError, pointErrorBox, fontFace, fontScale, textColor, thickness, 8);
}


void equalPick(int firstNum, int operation, int secondNum, Mat imgOriginal, int choice, float &result, int &ifShowError, string &newError)
{
	if (operation == 11)
	{
		result = firstNum + secondNum;
	}
	if (operation == 12)
	{
		result = firstNum - secondNum;
	}
	if (operation == 13)
	{
		result = firstNum * secondNum;
	}
	if (operation == 14)
	{
		if (secondNum != 0)
		{
			result = firstNum / secondNum;
		}
		else
		{
			newError = "Nie mozna dzielic przez '0'";
			newShowError("Nie mozna dzielic przez '0'", imgOriginal, ifShowError = 1, newError);
		}
	}
}

void cancelPick(int &firstNum, int &operation, int &secondNum, float &result)
{
	firstNum = -1;
	operation = -1;
	secondNum = -1;
	result = 123456;
}

// ReSharper disable once CppParameterValueIsReassigned
void trackerPointer(int dM10, int dM01, int dArea, int iLastX, int iLastY, Mat imgPointer)
{
	int posX = dM10 / dArea;
	int posY = dM01 / dArea;

	imgPointer = 0;

	Point posRight1(posX + 5, posY);
	Point posLeft1(posX - 5, posY);
	Point posUp1(posX, posY + 5);
	Point posDown1(posX, posY - 5);

	Point posRight2(posX + 15, posY);
	Point posLeft2(posX - 15, posY);
	Point posUp2(posX, posY + 15);
	Point posDown2(posX, posY - 15);

	Scalar lineColor = Scalar(255, 255, 255);

	if (iLastX >= 0 && iLastY >= 0 && posX >= 0 && posY >= 0)
	{
		//Draw a red line from the previous point to the current point
		line(imgPointer, posRight1, posRight2, lineColor, 2); // prawo
		line(imgPointer, posLeft1, posLeft2, lineColor, 2); // lewo
		line(imgPointer, posUp1, posUp2, lineColor, 2); // gora
		line(imgPointer, posDown1, posDown2, lineColor, 2); // dol
	}
}

void trackerLiner(int dM10, int dM01, int dArea, int &iLastX, int &iLastY, Mat imgLines)
{
	int posX = dM10 / dArea;
	int posY = dM01 / dArea;

	if (iLastX >= 0 && iLastY >= 0 && posX >= 0 && posY >= 0)
	{
		//Draw a red line from the previous point to the current point
		line(imgLines, Point(posX, posY), Point(iLastX, iLastY), Scalar(128, 128, 128), 1);
	}
	iLastX = posX;
	iLastY = posY;
}

void loadingInfo()
{
	cout << "---------- ControlPanel: ----------------------------------" << endl;
	cout << "1. Red / Blue / Green / Yellow / Light Blue" << endl;
	cout << "2. Linie sledzace wskaznik" << endl;
	cout << "3. Pointer sledzacy wskaznik" << endl;
	cout << "4. Kalibracja kontrastu obrazu" << endl;
	cout << "5. Kalibracja jasnosci obrazu" << endl;
	cout << "---------- Skroty klawiszowe: -----------------------------" << endl;
	cout << "Strzalka lewo / prawo - jasnosc" << endl;
	cout << "Strzalka gora / dol - kontrast" << endl;
	cout << "'[' - Poprzedni kolor" << endl;
	cout << "']' - Nastepny kolor" << endl;
	cout << "'P' - Pointer sledzacy wskaznik" << endl;
	cout << "'L' - Linie sledzace wskaznik" << endl;
	cout << "'R' - Czyszczenie konsoli" << endl;
	cout << "'1' - Pozycja pointera ON/OFF" << endl;
	cout << "'2' - Pierwsza liczba ON/OFF" << endl;
	cout << "'3' - Operator ON/OFF" << endl;
	cout << "'4' - Druga liczba ON/OFF" << endl;
	cout << "'5' - Wynik ON/OFF" << endl;
	cout << "'6' - Wybor ON/OFF" << endl;
	cout << "'7' - WaitFrame ON/OFF" << endl;
	cout << "'8' - Frame ON/OFF" << endl;
	cout << "'9' - Okno Debuga" << endl;
	cout << "'0' - Okno Czarno-Biale";
}

void controlPanel(int &cpSliderColor, int &iLowH, int &iHighH, int &iLowS, int &iHighS, int &iLowV, int &iHighV, int &isTrackerLiner, int &isTrackerPointer,
	int &cpSliderContrast, int &cpSliderBrightness, Scalar redColor, Scalar blueColor, Scalar greenColor, Scalar yellowColor, Scalar lightBlueColor, Scalar &colorPicked)
{
	createTrackbar("R/B/G/Y/LB", "controlPanelWindow", &cpSliderColor, 4);  //wybor koloru red, blue , green , yellow ,light blue
	createTrackbar("Liner", "controlPanelWindow", &isTrackerLiner, 1);
	createTrackbar("Pointer", "controlPanelWindow", &isTrackerPointer, 1);
	createTrackbar("Contrast", "controlPanelWindow", &cpSliderContrast, 10);
	createTrackbar("Brightness", "controlPanelWindow", &cpSliderBrightness, 10);

	if (cpSliderColor == 0) //red
	{
		colorPicked = redColor;

		iLowH = 170;
		iHighH = 179;

		iLowS = 150;
		iHighS = 255;

		iLowV = 60;
		iHighV = 255;
	}
	else if (cpSliderColor == 1) //blue
	{
		colorPicked = blueColor;

		iLowH = 110;
		iHighH = 130;

		iLowS = 150;
		iHighS = 255;

		iLowV = 150;
		iHighV = 255;
	}
	else if (cpSliderColor == 2) //green
	{
		colorPicked = greenColor;

		iLowH = 60;
		iHighH = 100;

		iLowS = 60;
		iHighS = 220;

		iLowV = 60;
		iHighV = 200;
	}
	else if (cpSliderColor == 3) //yellow
	{
		colorPicked = yellowColor;

		iLowH = 20;
		iHighH = 30;

		iLowS = 50;
		iHighS = 255;

		iLowV = 80;
		iHighV = 255;
	}

	else if (cpSliderColor == 4) //light blue
	{
		colorPicked = lightBlueColor;

		iLowH = 63;
		iHighH = 102;

		iLowS = 140;
		iHighS = 255;

		iLowV = 140;
		iHighV = 255;
	}
	if (isTrackerLiner == 1)
	{
		isTrackerLiner = 1;
	}
	if (isTrackerPointer == 1)
	{
		isTrackerPointer = 1;
	}
}

void debugControlPanel(int &isPosition, int &is1stNum, int &isOperator, int &is2ndNum, int &isResult, int &isChoice, int &isWaitFrame, int &isFrame,
	int iLastX, int iLastY, int firstNum, int secondNum, int operation, float result, int choice, int waitFrame, int frame)
{
	createTrackbar(">_position", "debugControlPanelWindow", &isPosition, 1);
	createTrackbar(">_1stNum", "debugControlPanelWindow", &is1stNum, 1);
	createTrackbar(">_Operator", "debugControlPanelWindow", &isOperator, 1);
	createTrackbar(">_2ndNum", "debugControlPanelWindow", &is2ndNum, 1);
	createTrackbar(">_Result", "debugControlPanelWindow", &isResult, 1);
	createTrackbar(">_choice", "debugControlPanelWindow", &isChoice, 1);
	createTrackbar(">_waitframe", "debugControlPanelWindow", &isWaitFrame, 1);
	createTrackbar(">_frame", "debugControlPanelWindow", &isFrame, 1);

	if (isPosition == 1)
	{
		cout << "Pozycja X: " << iLastX << " _Y: " << iLastY << endl;
	}
	if (is1stNum == 1)
	{
		cout << "1st num: " << firstNum << endl;
	}
	if (isOperator == 1)
	{
		cout << "operator: " << operation << endl;
	}
	if (is2ndNum == 1)
	{
		cout << "2nd num: " << secondNum << endl;
	}
	if (isResult == 1)
	{
		cout << "result: " << result << endl;
	}
	if (isChoice == 1)
	{
		cout << "choice: " << choice << endl;
	}
	if (isWaitFrame == 1)
	{
		cout << "waitframe: " << waitFrame << endl;
	}
	if (isFrame == 1)
	{
		cout << "frame: " << frame << endl;
	}
}

void changeContrast(int cpSliderContrast, int cpContrastFirstNum, float &cpContrastSecondNum, int cpContrastThirdNum, Mat &imgOriginal, Mat &contrastChange)
{
	contrastChange = imgOriginal;
	if (cpSliderContrast == 0)
	{
		cpContrastSecondNum = 0.01;
	}
	if (cpSliderContrast == 1)
	{
		cpContrastSecondNum = 0.2;
	}
	if (cpSliderContrast == 2)
	{
		cpContrastSecondNum = 0.4;
	}
	if (cpSliderContrast == 3)
	{
		cpContrastSecondNum = 0.6;
	}
	if (cpSliderContrast == 4)
	{
		cpContrastSecondNum = 0.8;
	}
	if (cpSliderContrast == 5)
	{
		cpContrastSecondNum = 1;
	}
	if (cpSliderContrast == 6)
	{
		cpContrastSecondNum = 1.2;
	}
	if (cpSliderContrast == 7)
	{
		cpContrastSecondNum = 1.4;
	}
	if (cpSliderContrast == 8)
	{
		cpContrastSecondNum = 1.6;
	}
	if (cpSliderContrast == 9)
	{
		cpContrastSecondNum = 1.8;
	}
	if (cpSliderContrast == 10)
	{
		cpContrastSecondNum = 2;
	}
	contrastChange.convertTo(imgOriginal, cpContrastFirstNum, cpContrastSecondNum, cpContrastThirdNum); //contrast change
}

void changeBrightness(int cpSliderBrightness, int cpBrightnessFirstNum, int cpBrightnessSecondNum, int &cpBrightnessThirdNum, Mat &imgOriginal, Mat &brigtnessChange)
{
	brigtnessChange = imgOriginal;
	if (cpSliderBrightness == 0)
	{
		cpBrightnessThirdNum = -99;
	}
	if (cpSliderBrightness == 1)
	{
		cpBrightnessThirdNum = -80;
	}
	if (cpSliderBrightness == 2)
	{
		cpBrightnessThirdNum = -60;
	}
	if (cpSliderBrightness == 3)
	{
		cpBrightnessThirdNum = -40;
	}
	if (cpSliderBrightness == 4)
	{
		cpBrightnessThirdNum = -20;
	}
	if (cpSliderBrightness == 5)
	{
		cpBrightnessThirdNum = 1;
	}
	if (cpSliderBrightness == 6)
	{
		cpBrightnessThirdNum = 20;
	}
	if (cpSliderBrightness == 7)
	{
		cpBrightnessThirdNum = 40;
	}
	if (cpSliderBrightness == 8)
	{
		cpBrightnessThirdNum = 60;
	}
	if (cpSliderBrightness == 9)
	{
		cpBrightnessThirdNum = 80;
	}
	if (cpSliderBrightness == 10)
	{
		cpBrightnessThirdNum = 99;
	}
	brigtnessChange.convertTo(imgOriginal, cpBrightnessFirstNum, cpBrightnessSecondNum, cpBrightnessThirdNum); //contrast change
}

void keyBind(Mat imgOriginal, int keyPressed, int &cpSliderContrast, int &cpSliderBrightness, int &cpSliderColor, int &isTrackerLiner,
	int &isTrackerPointer, int &ifShowError, string &newError, int &isFrame, int &isWaitFrame, int &isChoice, int &isResult, int &is2ndNum, int &isOperator, int &is1stNum, int &isPosition)
{
	/*
	1 (position)= 49
	2 (1st num) = 50
	3 (operator) = 51
	4 (2nd num) = 52
	5 (result) = 53
	6 (choice) = 54
	7 (wait frame) = 55
	8 (frame) = 56
	9 (show debug window) = 57
	0 (show blackwhite window) = 48

	L (liner) = 108
	P (pointer) = 112
	R (reset) = 114 (reset and clear console)
	[ (color left) = 91
	] (color right) = 93
	arrowkeyleft (brightness down) = 75
	arrowkeyright (brightness up) = 77
	arrowkeyup (contrast up) = 72
	arrowkeydown (contrast down) = 80
	*/
	if (keyPressed == 114)
	{
		system("cls");
		loadingInfo();
	}
	if (keyPressed == 49)  //position
	{

	}
	if (keyPressed == 50) //1st number
	{

	}
	if (keyPressed == 51) //operator
	{

	}
	if (keyPressed == 52) //2nd num
	{

	}
	if (keyPressed == 53) //result
	{

	}
	if (keyPressed == 54) //choice
	{

	}
	if (keyPressed == 55) //waitframe
	{
		if (isWaitFrame == 0)
		{
			isWaitFrame = 1;
			newError = "Debug Frame ON";
			newShowError("Debug Frame ON", imgOriginal, ifShowError = 1, newError);
			Sleep(50);
		}
		else if (isWaitFrame == 1)
		{
			isWaitFrame = 0;
			newError = "Debug Frame OFF";
			newShowError("Debug Frame OFF", imgOriginal, ifShowError = 1, newError);
			Sleep(50);
		}
	}
	if (keyPressed == 56) //frame
	{
		if (isFrame == 0)
		{
			isFrame = 1;
			newError = "Debug Frame ON";
			newShowError("Debug Frame ON", imgOriginal, ifShowError = 1, newError);
			Sleep(50);
		}
		else if (isFrame == 1)
		{
			isFrame = 0;
			newError = "Debug Frame OFF";
			newShowError("Debug Frame OFF", imgOriginal, ifShowError = 1, newError);
			Sleep(50);
		}
	}
	if (keyPressed == 57)
	{

	}
	if (keyPressed == 48)
	{

	}
	if (keyPressed == 108)
	{
		if (isTrackerLiner == 0)
		{
			isTrackerLiner = 1;
			newError = "Wlaczono liner";
			newShowError("Wlaczono liner", imgOriginal, ifShowError = 1, newError);
			Sleep(50);
		}
		else if (isTrackerLiner == 1)
		{
			isTrackerLiner = 0;
			newError = "Wylaczono liner";
			newShowError("Wylaczono liner", imgOriginal, ifShowError = 1, newError);
			Sleep(50);
		}
	}
	if (keyPressed == 112)
	{
		if (isTrackerPointer == 0)
		{
			isTrackerPointer = 1;
			newError = "Wlaczono pointer";
			newShowError("Wlaczono pointer", imgOriginal, ifShowError = 1, newError);
		}
		else if (isTrackerPointer == 1)
		{
			isTrackerPointer = 0;
			newError = "Wylaczono pointer";
			newShowError("Wylaczono pointer", imgOriginal, ifShowError = 1, newError);
		}
	}
	if (keyPressed == 91)
	{
		if (cpSliderColor > 0)
		{
			cpSliderColor = cpSliderColor - 1;
			newError = "Zmienino kolor";
			newShowError("Zmienino kolor", imgOriginal, ifShowError = 1, newError);
		}
	}
	if (keyPressed == 93)
	{
		if (cpSliderColor < 5)
		{
			cpSliderColor = cpSliderColor + 1;
			newError = "Zmienino kolor";
			newShowError("Zmienino kolor", imgOriginal, ifShowError = 1, newError);
		}
	}
	if (keyPressed == 77)
	{
		if (cpSliderBrightness < 10)
		{
			cpSliderBrightness = cpSliderBrightness + 1;
			newError = "Zwiekszono jasnosc";
			newShowError("Zwiekszono jasnosc", imgOriginal, ifShowError = 1, newError);
		}
	}
	if (keyPressed == 75)
	{
		if (cpSliderBrightness > 0)
		{
			cpSliderBrightness = cpSliderBrightness - 1;
			newError = "Zmniejszono jasnosc";
			newShowError("Zmniejszono jasnosc", imgOriginal, ifShowError = 1, newError);
		}
	}
	if (keyPressed == 72)
	{
		if (cpSliderContrast < 10)
		{
			cpSliderContrast = cpSliderContrast + 1;
			newError = "Zwiekszono kontrast";
			newShowError("Zwiekszono kontrast", imgOriginal, ifShowError = 1, newError);
		}
	}
	if (keyPressed == 80)
	{
		if (cpSliderContrast > 0)
		{
			cpSliderContrast = cpSliderContrast - 1;
			newError = "Zmniejszono kontrast";
			newShowError("Zmniejszono kontrast", imgOriginal, ifShowError = 1, newError);
		}
	}
}

#pragma region TODO
/*
TODO
- dodanie do keybindow 'd' (show debug console i moze to drugie okno)
- fix all warnings
- dokonczyc keybindy
- poprawa error boxa (moze cos w stylu przesuwania)
- fix result ( dzielenie nie dziala, int first & 2nd num -> float) ( znaleznie metody na wyswietalnie liczby po przecinku jesli nie .0 )
- zmiana kontrastu i jasnosci tylko raz po zmianie a nie co kazdy loop petli ? czy aby napewno? - sprawdzenie wydajnosci
- dodanie kontrastu i jasnosci do debuga ? po co?
- MAYBE: dodanie wyszukiwania koloru po ksztalcie
- dodanie wiecej kolorow ( orange, pink, brown , ?black? , ?white? )
- MAYBE: dodanie " i " do obrazu - wyswietlanie informacji i clearowanie konsoli
- usprawnienie wydajnosci (windows error with debug option)
*/
#pragma endregion

int main(int argc, char** argv)
{

#pragma region Declarations

	int firstNum = -1;
	int secondNum = -1;
	int operation = -1;
	int waitFrame = 0;
	int choice = 0;
	int frame = 1;
	float result = 123456;
	string error;
	string newError;
	int ifShowError = 0; // czy aktualnie wyswietlac error boxa
	int doShowError = 0; // czas wyswietlania error boxa we framach

	int iLastX = -1;
	int iLastY = -1;

	int isPosition = 0; //1
	int is1stNum = 0; //2
	int isOperator = 0; //3
	int is2ndNum = 0; //4
	int isResult = 0; //5
	int isChoice = 0; //6
	int isWaitFrame = 0; //7
	int isFrame = 0; //8
	//int isShowDebugWindow = 1; //9
	//int isShowBlackwhiteWindow = 1; //0

	int isTrackerLiner = 0; //L
	int isTrackerPointer = 1; //P
	int cpSliderColor = 0;
	int cpSliderContrast = 5;
	int cpSliderBrightness = 5;
	int cpContrastFirstNum = -1; //const
	float cpContrastSecondNum = 1; // +/- o 0.1
	int cpContrastThirdNum = 0; //const
	int cpBrightnessFirstNum = -1; //const
	int cpBrightnessSecondNum = 1; //const
	int cpBrightnessThirdNum = 0; // +/- o 10
	Mat contrastChange;
	Mat brightnessChange;
	//bool ifChanged = false;

	// colors

	Scalar redColor(0, 0, 255);
	Scalar blueColor(255, 0, 0);
	Scalar greenColor(0, 255, 0);
	Scalar yellowColor(0, 255, 255);
	Scalar lightBlueColor(255, 255, 0);

	//0 = red, 1 = blue, 2 = green, 3 = yellow, 4 = light blue
	Scalar colorPicked(0, 0, 0);

	int iLowH = 1;
	int iHighH = 1;

	int iLowS = 1;
	int iHighS = 1;

	int iLowV = 1;
	int iHighV = 1;

#pragma endregion

	VideoCapture cap(0); //capture the video from webcam

	if (!cap.isOpened())  // if not success, exit program
	{
		cout << "Cannot open the web cam" << endl;
		return -1;
	}



	loadingInfo();

	namedWindow("debugControlPanelWindow");
	resizeWindow("debugControlPanelWindow", 300, 400);

	namedWindow("controlPanelWindow");
	resizeWindow("controlPanelWindow", 300, 400);


	//Capture a temporary image from the camera
	Mat imgTmp;
	cap.read(imgTmp);

	//Create a black image with the size as the camera output
	Mat imgLines = Mat::zeros(imgTmp.size(), CV_8UC3);;
	Mat imgPointer = Mat::zeros(imgTmp.size(), CV_8UC3);;

	while (true)
	{
		Mat imgOriginal;

		controlPanel(cpSliderColor, iLowH, iHighH, iLowS, iHighS, iLowV, iHighV, isTrackerLiner, isTrackerPointer, cpSliderContrast, cpSliderBrightness,
			redColor, blueColor, greenColor, yellowColor, lightBlueColor, colorPicked);

		debugControlPanel(isPosition, is1stNum, isOperator, is2ndNum, isResult, isChoice, isWaitFrame, isFrame,
			iLastX, iLastY, firstNum, secondNum, operation, result, choice, waitFrame, frame);

		bool bSuccess = cap.read(imgOriginal); // read a new frame from video

		if (!bSuccess) //if not success, break loop
		{
			cout << "Cannot read a frame from video stream" << endl;
			break;
		}

		//zmiana obrazu
		if (cpSliderContrast != 5)
		{
			changeContrast(cpSliderContrast, cpContrastFirstNum, cpContrastSecondNum, cpContrastThirdNum, imgOriginal, contrastChange);
		}

		if (cpSliderBrightness != 5)
		{
			changeBrightness(cpSliderBrightness, cpBrightnessFirstNum, cpBrightnessSecondNum, cpBrightnessThirdNum, imgOriginal, brightnessChange);
		}

		Mat imgHSV;

		cvtColor(imgOriginal, imgHSV, COLOR_BGR2HSV); //Convert the captured frame from BGR to HSV

		Mat imgThresholded;

		inRange(imgHSV, Scalar(iLowH, iLowS, iLowV), Scalar(iHighH, iHighS, iHighV), imgThresholded); //Threshold the image

																									  //morphological opening (removes small objects from the foreground)
		erode(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)));
		dilate(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)));

		//morphological closing (removes small holes from the foreground)
		dilate(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)));
		erode(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)));

		//Calculate the moments of the thresholded image
		Moments oMoments = moments(imgThresholded);

		double dM01 = oMoments.m01;
		double dM10 = oMoments.m10;
		double dArea = oMoments.m00;

		// if area <= 10000, zalozenie ze nie ma obiektu
		if (dArea > 10000)
		{
			trackerLiner(dM10, dM01, dArea, iLastX, iLastY, imgLines);
			trackerPointer(dM10, dM01, dArea, iLastX, iLastY, imgPointer);
		}

		imshow("Thresholded Image", imgThresholded); //show the thresholded image
		frame++;

		//trackery
		if (isTrackerLiner == true)
		{
			imgOriginal = imgOriginal + imgLines;
		}
		if (isTrackerPointer == true)
		{
			imgOriginal = imgOriginal + imgPointer;
		}

		//obracanie obrazu
		flip(imgOriginal, imgOriginal, 1);

		//dodawanie UI
		userInterface(imgTmp, imgOriginal);

		//sprawdzanie pozycji wskaznika
		updatePosition(waitFrame, choice, iLastX, iLastY);

		while (_kbhit())
		{
			fflush(stdin);
			int keyPressed = _getch();
			//cout << "key pressed: " << keyPressed << endl;
			keyBind(imgOriginal, keyPressed, cpSliderContrast, cpSliderBrightness, cpSliderColor, isTrackerLiner, isTrackerPointer, ifShowError, newError,
				isFrame, isWaitFrame, isChoice, isResult, is2ndNum, isOperator, is1stNum, isPosition);
		}


#pragma region Program logic and exceptions


		// jesli cancel
		if (choice == 16)
		{
			cancelPick(firstNum, operation, secondNum, result);
			newError = "Zresetowano";
			newShowError("Zresetowano", imgOriginal, ifShowError = 1, newError);
		}
		else if (firstNum == -1)
		{
			if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6 || choice == 7 || choice == 8 || choice == 9 || choice == 10) // liczby
			{
				firstNumPick(firstNum, imgOriginal, choice);
			}
			else if (choice == 11 || choice == 12 || choice == 13 || choice == 14) // operatory
			{
				newError = "Wpierw wybierz liczbe";
				newShowError("Wpierw wybierz liczbe", imgOriginal, ifShowError = 1, newError);
			}
			else if (choice == 15) // equals
			{
				newError = "Niepoprawne dzialanie";
				newShowError("Niepoprawne dzialanie", imgOriginal, ifShowError = 1, newError);
			}
		}
		else if (firstNum != -1)
		{
			if (operation == -1)
			{
				if (choice == 11 || choice == 12 || choice == 13 || choice == 14)
				{
					operationPick(operation, imgOriginal, choice);
				}
				else if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6 || choice == 7 || choice == 8 || choice == 9 || choice == 10)
				{
					newError = "Wybierz operator";
					newShowError("Wybierz operator", imgOriginal, ifShowError = 1, newError);
				}
				else if (choice == 15)
				{
					newError = "Niepoprawne dzialanie";
					newShowError("Niepoprawne dzialanie", imgOriginal, ifShowError = 1, newError);
				}
			}
			else if (operation != -1)
			{
				if (secondNum == -1)
				{
					if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6 || choice == 7 || choice == 8 || choice == 9 || choice == 10) // liczby
					{
						secondNumPick(secondNum, imgOriginal, choice);
					}
					else if (choice == 11 || choice == 12 || choice == 13 || choice == 14)
					{
						newError = "Wybierz liczbe";
						newShowError("Wybierz liczbe", imgOriginal, ifShowError = 1, newError);
					}
					else if (choice == 15)
					{
						newError = "Niepoprawne dzialanie";
						newShowError("Niepoprawne dzialanie", imgOriginal, ifShowError = 1, newError);
					}
				}
				else if (secondNum != -1)
				{
					// wyliczanie
					if (choice == 15)
					{
						equalPick(firstNum, operation, secondNum, imgOriginal, choice, result, ifShowError, newError);
					}
					else if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6 || choice == 7 || choice == 8 || choice == 9 ||
						choice == 10 || choice == 11 || choice == 12 || choice == 13 || choice == 14)
					{
						newError = "Wykonaj dzialanie";
						newShowError("Wykonaj dzialanie", imgOriginal, ifShowError = 1, newError);
					}
				}
			}
		}
		else
		{
			firstNum = -1;
		}


#pragma endregion

#pragma region displaying results

		if (firstNum >= 0)
		{
			showFirstNum(firstNum, imgOriginal, colorPicked);
		}
		if (operation >= 0)
		{
			showOperation(operation, imgOriginal, colorPicked);
		}
		if (secondNum >= 0)
		{
			showSecondNum(secondNum, imgOriginal, colorPicked);
		}
		if (firstNum >= 0 && operation >= 0 && secondNum >= 0 && result < 123456)
		{
			showResult(result, imgOriginal, colorPicked);
		}


#pragma endregion

#pragma region DEBUG CONSOLE

		//cout << "waitframe: " << waitFrame << endl;
		//cout << "frame: " << frame << endl;
		//cout << "1st num: " << firstNum << endl;
		//cout << "operator: " << operation << endl;
		//cout << "2nd num: " << secondNum << endl;
		//cout << "RESULT: " << result << endl;
		//cout << "choice: " << choice << endl;
		//cout << "Pozycja X: " << iLastX << " _Y: " << iLastY << endl;
		//showError("test", imgOriginal);

#pragma endregion

		if (ifShowError == 1)
		{
			if (doShowError > 0)
			{
				newShowError(error, imgOriginal, ifShowError, newError);
				doShowError--;
				if (doShowError == 0)
				{
					ifShowError = 0;
					doShowError = 3;
				}
			}
			if (doShowError == 0)
			{
				doShowError = 3;
			}
		}

		namedWindow("Original", WINDOW_NORMAL);
		imshow("Original", imgOriginal); //show the original image.

		if (waitKey(30) == 27) //wait for 'esc' key press for 30ms. If 'esc' key is pressed, break loop
		{
			cout << "esc key is pressed by user" << endl;
			break;
		}
	}

	return 0;
}