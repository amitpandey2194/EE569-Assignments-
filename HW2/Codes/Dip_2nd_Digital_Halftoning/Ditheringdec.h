/*
 * Ditheringdec.h
 *
 *  Created on: Feb 24, 2017
 *      Author: amitp
 */

#ifndef DITHERINGDEC_H_
#define DITHERINGDEC_H_
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include<string>
using namespace std;
class Dithering{
	int height=0,width=0,BytesPerPixel=0;
public:
	//constructor//
	Dithering();
	Dithering(const Dithering &); // copy constructor
	Dithering & operator=(const Dithering &); // copy operator
	~Dithering();  // destructor

	int getBytesPerPixel() const {
		return BytesPerPixel;
	}

	void setBytesPerPixel(int bytesPerPixel) {
		BytesPerPixel = bytesPerPixel;
	}

	int getHeight() const {
		return height;
	}

	void setHeight(int height) {
		this->height = height;
	}

	int getWidth() const {
		return width;
	}

	void setWidth(int width) {
		this->width = width;
	}
			unsigned char * DynamicMemoryAllocation1d(int,int);
			unsigned char * DynamicMemoryAllocation2d_2_1d(unsigned char **,int,int);
			unsigned char ** DynamicMemoryAllocation2d(int,int);
			unsigned char ** DynamicMemoryAllocation1d_2_2d(unsigned char *,int,int);
			unsigned char ** FileRead(const char*[],int,int,int);
			bool FileWrite(const char*[],unsigned char *,int,int,int);
			unsigned char** DitheringLogic(unsigned char **,int,int);
			unsigned char ** FourLevelGrayScale(unsigned char**,int,int);
			unsigned char** ErrorDiffusionFloyd(unsigned char**,int,int);
			unsigned char** ErrorDiffusionJJN(unsigned char**,int,int);
			unsigned char** ErrorDiffusionStucki(unsigned char**,int,int);


};





#endif /* DITHERINGDEC_H_ */
