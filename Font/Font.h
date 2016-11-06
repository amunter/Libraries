/*
 * Copyright 2010 Reef Angel / Roberto Imai
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

 /*
  * Updated by:  Curt Binder
  * Updates Released under Apache License, Version 2.0
  */

#ifndef __FONT_H__
#define __FONT_H__

#include <Globals.h>
#include <RA_TFT.h>

class FontClass
{
	public:
		FontClass();
		void SetColor(int iFC, int iBC, boolean iTransparent);
		void SetPosition(int ix, int iy);
		void SetFont(uint8_t *iPtr);
		byte CharWidth(char c);
		int TextWidth(char *str);
		int TextWidthP(const char *str);
//		void DrawText(const char *str);
//		void DrawText(int ix, int iy, const char *str);
//		void DrawText(int iFC, int iBC,int ix, int iy, const char *str);
		void DrawChar(char c); 
		void DrawChar(int ix, int iy,char c);
		void DrawChar(int iFC, int iBC,int ix, int iy,char c);
		void DrawText(char *str);
		void DrawText(int ix, int iy, char *str);
		void DrawText(int iFC, int iBC,int ix, int iy, char *str);
		void DrawText(long n);
		void DrawText(int ix, int iy, long n);
		void DrawText(int iFC, int iBC,int ix, int iy, long n);
		void DrawText(String str);
		void DrawText(int ix, int iy, String str);
		void DrawText(int iFC, int iBC,int ix, int iy, String str);		
		void DrawTextP(const char *str);
		void DrawTextP(int ix, int iy, const char *str);
		void DrawTextP(int iFC, int iBC,int ix, int iy, const char *str);
		void DrawCenterText(int ix, int iy, char *str);
		void DrawCenterText(int ix, int iy, String str);
		void DrawCenterTextP(int ix, int iy, const char *str);
		void DrawCenterNumber(int ix, int iy, long n, byte decimal);
		int inline GetX() { return x; }
		int inline GetY() { return y; }

	private:
		uint8_t *Ptr;
		byte w, h, depth;
    	char FirstC, LastC;
		boolean Fixed, Transparent;
		int FC, BC;
		int  x, y;
		int  CS;
		
}; //  __FONT_H__

// 8x8 Font
#ifndef f8x8_H
#define f8x8_H

#define f8x8_WIDTH 8
#define f8x8_HEIGHT 8

static const uint8_t __attribute__ ((progmem)) f8x8[] = {
    0x01, 0x76, 0x08, 0x08, 0x01, 0x20, 0x7A,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 
    0x04, 0x02, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x04, 
    0x00, 0x06, 0x06, 0x06, 0x06, 0x05, 0x05, 0x06, 0x06, 0x01, 0x04, 0x05, 0x04, 0x07, 0x06, 0x06, 
    0x06, 0x06, 0x06, 0x05, 0x05, 0x05, 0x05, 0x07, 0x05, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x02, 0x04, 0x04, 0x01, 0x01, 0x04, 0x01, 0x07, 0x04, 0x05, 
    0x04, 0x04, 0x02, 0x04, 0x02, 0x04, 0x04, 0x05, 0x03, 0x03, 0x03, 
    0x00, 0xC0, 0x40, 0x3E, 0x41, 0x41, 0x3E, 0x02, 0x7F, 0x62, 0x51, 0x49, 0x46, 0x22, 0x41, 0x49, 
    0x36, 0x18, 0x16, 0x7F, 0x10, 0x2F, 0x45, 0x45, 0x39, 0x3E, 0x49, 0x49, 0x32, 0x01, 0x71, 0x0D, 
    0x03, 0x36, 0x49, 0x49, 0x36, 0x26, 0x49, 0x49, 0x3E, 0x48, 0x02, 0x51, 0x09, 0x06, 0x60, 0x1C, 
    0x13, 0x13, 0x1C, 0x60, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x36, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x22, 
    0x7F, 0x41, 0x41, 0x41, 0x41, 0x3E, 0x7F, 0x49, 0x49, 0x49, 0x41, 0x7F, 0x09, 0x09, 0x09, 0x01, 
    0x3E, 0x41, 0x41, 0x49, 0x29, 0x7A, 0x7F, 0x08, 0x08, 0x08, 0x08, 0x7F, 0x7F, 0x30, 0x40, 0x40, 
    0x3F, 0x7F, 0x08, 0x14, 0x22, 0x41, 0x7F, 0x40, 0x40, 0x40, 0x7F, 0x03, 0x0C, 0x30, 0x0C, 0x03, 
    0x7F, 0x7F, 0x03, 0x0C, 0x30, 0x40, 0x7F, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x3E, 0x7F, 0x09, 0x09, 
    0x09, 0x09, 0x06, 0x3E, 0x41, 0x41, 0x51, 0x61, 0xBE, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x76, 0x26, 
    0x49, 0x49, 0x49, 0x32, 0x01, 0x01, 0x7F, 0x01, 0x01, 0x3F, 0x40, 0x40, 0x40, 0x3F, 0x03, 0x1C, 
    0x60, 0x1C, 0x03, 0x03, 0x1C, 0x60, 0x18, 0x60, 0x1C, 0x03, 0x63, 0x14, 0x08, 0x14, 0x63, 0x03, 
    0x04, 0x78, 0x04, 0x03, 0x61, 0x51, 0x49, 0x45, 0x43, 0x20, 0x54, 0x54, 0x78, 0x7F, 0x44, 0x44, 
    0x38, 0x38, 0x44, 0x44, 0x28, 0x38, 0x44, 0x44, 0x7F, 0x38, 0x54, 0x54, 0x18, 0x7E, 0x09, 0x98, 
    0xA4, 0xA4, 0x7C, 0x7F, 0x08, 0x04, 0x78, 0x7D, 0xFD, 0x7F, 0x18, 0x24, 0x40, 0x7F, 0x7C, 0x04, 
    0x04, 0x7C, 0x04, 0x04, 0x78, 0x7C, 0x04, 0x04, 0x78, 0x38, 0x44, 0x44, 0x44, 0x38, 0xFC, 0x24, 
    0x24, 0x18, 0x18, 0x24, 0x24, 0xFC, 0x7C, 0x04, 0x48, 0x54, 0x54, 0x24, 0x3E, 0x44, 0x3C, 0x40, 
    0x40, 0x7C, 0x1C, 0x60, 0x60, 0x1C, 0x1C, 0x60, 0x18, 0x60, 0x1C, 0x6C, 0x10, 0x6C, 0x9C, 0xA0, 
    0x7C, 0x64, 0x54, 0x4C
};
#endif //  f8x8_H

// 12x12 Font
#ifndef f12x12_H
#define f12x12_H

#define f12x12_WIDTH 12
#define f12x12_HEIGHT 12

static const uint8_t __attribute__ ((progmem)) f12x12[] = {
    0x02, 0xF6, 0x0C, 0x0C, 0x01, 0x20, 0x7A,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 
    0x06, 0x04, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x06, 
    0x00, 0x08, 0x08, 0x07, 0x08, 0x07, 0x07, 0x08, 0x08, 0x02, 0x06, 0x08, 0x07, 0x0A, 0x08, 0x08, 
    0x08, 0x08, 0x09, 0x07, 0x08, 0x08, 0x08, 0x0B, 0x09, 0x0A, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x04, 0x06, 0x06, 0x02, 0x03, 0x06, 0x02, 0x0A, 0x06, 0x06, 
    0x06, 0x06, 0x04, 0x06, 0x04, 0x06, 0x08, 0x0A, 0x08, 0x08, 0x06, 
    0x00, 0x60, 0x00, 0x09, 0x67, 0x7C, 0xF0, 0xC1, 0x07, 0x1F, 0x73, 0x48, 0x00, 0x03, 0x30, 0x00, 
    0x03, 0x38, 0xE0, 0xC3, 0x0F, 0x1F, 0x70, 0x00, 0xFE, 0xF1, 0x3F, 0x01, 0x12, 0x20, 0xFF, 0xE3, 
    0x1F, 0x02, 0x20, 0x00, 0xFF, 0xF3, 0x3F, 0x86, 0x73, 0x3C, 0x61, 0x12, 0x23, 0x1F, 0xE2, 0x20, 
    0x02, 0x31, 0x30, 0x11, 0x12, 0x21, 0xFF, 0xE3, 0x1E, 0xC0, 0x00, 0x0F, 0xBC, 0xE0, 0x08, 0xFF, 
    0xF3, 0x3F, 0x3F, 0xF1, 0x33, 0x11, 0x12, 0x21, 0xF1, 0x13, 0x1E, 0xFE, 0xF1, 0x3F, 0x11, 0x12, 
    0x21, 0xF3, 0x23, 0x1E, 0x01, 0x10, 0x38, 0xF1, 0xD3, 0x07, 0x0F, 0x30, 0x00, 0xEE, 0xF1, 0x3F, 
    0x11, 0x12, 0x21, 0xFF, 0xE3, 0x1E, 0x1E, 0xF1, 0x33, 0x21, 0x12, 0x22, 0xFF, 0xE3, 0x1F, 0x0C, 
    0xC3, 0x30, 0x06, 0x70, 0x00, 0x61, 0x13, 0x37, 0x1F, 0xE0, 0x00, 0x00, 0x03, 0x3E, 0xFC, 0xF0, 
    0x08, 0x8F, 0xC0, 0x0F, 0xE0, 0x03, 0x30, 0xFF, 0xF3, 0x3F, 0x11, 0x12, 0x21, 0x11, 0x12, 0x21, 
    0xFF, 0xE3, 0x1E, 0xFC, 0xE0, 0x1F, 0x03, 0x13, 0x20, 0x01, 0x32, 0x30, 0x86, 0xF1, 0x3F, 0xFF, 
    0x13, 0x20, 0x01, 0x12, 0x20, 0x03, 0xE3, 0x1F, 0xFC, 0xF0, 0x3F, 0xFF, 0x13, 0x21, 0x11, 0x12, 
    0x21, 0x11, 0x12, 0x20, 0xFF, 0xF3, 0x3F, 0x11, 0x10, 0x01, 0x11, 0x10, 0x01, 0x01, 0xC0, 0x0F, 
    0xFE, 0x31, 0x30, 0x01, 0x12, 0x22, 0x21, 0x32, 0x1E, 0xE6, 0xF3, 0x3F, 0xFF, 0x03, 0x01, 0x10, 
    0x00, 0x01, 0x10, 0xF0, 0x3F, 0xFF, 0xF3, 0x3F, 0xFF, 0x03, 0x18, 0x80, 0x03, 0x20, 0x00, 0xF2, 
    0x3F, 0xFF, 0xF1, 0x3F, 0xFF, 0x83, 0x03, 0x6C, 0x60, 0x0C, 0x83, 0x11, 0x30, 0x00, 0xF2, 0x3F, 
    0xFF, 0x03, 0x20, 0x00, 0x02, 0x20, 0x00, 0x02, 0x20, 0xFF, 0xF3, 0x3F, 0x3C, 0x00, 0x0F, 0xC0, 
    0x03, 0x3C, 0xF0, 0xC0, 0x03, 0xFF, 0xF3, 0x3F, 0xFF, 0xF3, 0x3F, 0x0E, 0xC0, 0x03, 0xF0, 0x00, 
    0x1C, 0xFF, 0xF3, 0x3F, 0xFC, 0xE0, 0x1F, 0x03, 0x13, 0x20, 0x01, 0x32, 0x30, 0xFE, 0xC1, 0x0F, 
    0xFF, 0xF3, 0x3F, 0x21, 0x10, 0x02, 0x21, 0x10, 0x02, 0x3F, 0xE0, 0x01, 0xFC, 0xE0, 0x1F, 0x03, 
    0x13, 0x20, 0x81, 0x32, 0x38, 0xFE, 0xC3, 0x2F, 0xFF, 0xF3, 0x3F, 0x21, 0x10, 0x02, 0x21, 0x10, 
    0x02, 0xFF, 0xE1, 0x3D, 0x00, 0xE2, 0x18, 0x9F, 0x13, 0x21, 0x31, 0x12, 0x22, 0xE7, 0x63, 0x1C, 
    0x01, 0x10, 0x00, 0x01, 0xF0, 0x3F, 0xFF, 0x13, 0x00, 0x01, 0x10, 0x00, 0xFF, 0xF0, 0x1F, 0x00, 
    0x03, 0x20, 0x00, 0x02, 0x30, 0xFF, 0xF1, 0x0F, 0x03, 0xF0, 0x01, 0xFC, 0x00, 0x3C, 0xC0, 0xC3, 
    0x0F, 0x1F, 0x30, 0x00, 0x1F, 0xF0, 0x07, 0xE0, 0x03, 0x3C, 0x78, 0xC0, 0x01, 0x78, 0x00, 0x3C, 
    0xE0, 0xF3, 0x07, 0x1F, 0x30, 0x30, 0x87, 0xC3, 0x0C, 0x78, 0x00, 0x03, 0x78, 0xC0, 0x0C, 0x87, 
    0x33, 0x30, 0x03, 0x70, 0x00, 0x0C, 0x80, 0x01, 0xF0, 0x03, 0x3F, 0x18, 0xC0, 0x00, 0x07, 0x30, 
    0x00, 0x01, 0x13, 0x38, 0xC1, 0x12, 0x26, 0x31, 0x92, 0x21, 0x0D, 0x72, 0x20, 0x03, 0x02, 0x19, 
    0xD8, 0x83, 0x26, 0x28, 0x82, 0x3F, 0xF0, 0xF3, 0x3F, 0xFF, 0x83, 0x20, 0x08, 0x82, 0x3F, 0xF0, 
    0x01, 0x1F, 0xF8, 0x83, 0x20, 0x08, 0x82, 0x31, 0x10, 0x01, 0x1F, 0xF8, 0x83, 0x20, 0x08, 0xF2, 
    0x3F, 0xFF, 0x03, 0x1F, 0xF8, 0x83, 0x22, 0x28, 0x82, 0x33, 0x30, 0x81, 0x00, 0xFE, 0xF3, 0x3F, 
    0x09, 0x00, 0x9F, 0xF8, 0x8B, 0xA0, 0x08, 0x8A, 0xFF, 0xF8, 0xF7, 0x3F, 0xFF, 0x83, 0x00, 0x08, 
    0x80, 0x3F, 0xF0, 0xB3, 0x3F, 0xFB, 0x03, 0x80, 0xFB, 0xBF, 0x7F, 0xFF, 0xF3, 0x3F, 0xE0, 0x00, 
    0x1B, 0x18, 0x83, 0x20, 0xFF, 0xF3, 0x3F, 0xF8, 0x83, 0x3F, 0x08, 0x80, 0x00, 0xF8, 0x83, 0x3F, 
    0x08, 0x80, 0x00, 0xF8, 0x03, 0x3F, 0xF8, 0x83, 0x3F, 0x08, 0x80, 0x00, 0xF8, 0x03, 0x3F, 0xF0, 
    0x81, 0x3F, 0x08, 0x82, 0x20, 0xF8, 0x03, 0x1F, 0xF8, 0x8F, 0xFF, 0x08, 0x82, 0x20, 0xF8, 0x03, 
    0x1F, 0xF0, 0x81, 0x3F, 0x08, 0x82, 0x20, 0xF8, 0x8F, 0xFF, 0xF8, 0x83, 0x3F, 0x18, 0x80, 0x00, 
    0x30, 0x81, 0x37, 0x48, 0x82, 0x24, 0xD8, 0x03, 0x19, 0x08, 0xE0, 0x1F, 0xFE, 0x83, 0x20, 0xF8, 
    0x81, 0x3F, 0x00, 0x02, 0x20, 0xF8, 0x83, 0x3F, 0x18, 0x80, 0x07, 0xE0, 0x00, 0x38, 0x80, 0x03, 
    0x0E, 0x78, 0x80, 0x01, 0x18, 0x80, 0x0F, 0xE0, 0x03, 0x38, 0xF0, 0x00, 0x0F, 0x80, 0x03, 0x3E, 
    0xF8, 0x80, 0x01, 0x08, 0x82, 0x31, 0xB0, 0x01, 0x0E, 0xE0, 0x00, 0x1B, 0x18, 0x83, 0x20, 0x18, 
    0x80, 0x07, 0xE0, 0x0D, 0xF8, 0x80, 0x07, 0x1E, 0x78, 0x80, 0x01, 0x08, 0x83, 0x38, 0xC8, 0x82, 
    0x26, 0x38, 0x82, 0x21
};
#endif //  f12x12_H

// Arial Bold 20 Font
#ifndef ArialBold20_H
#define ArialBold20_H

#define ArialBold20_WIDTH 26
#define ArialBold20_HEIGHT 31

static const uint8_t __attribute__ ((progmem)) ArialBold20[] = {
    0x0B, 0x92, 0x1A, 0x1F, 0x81, 0x20, 0x7A,
    0x0A, 0x04, 0x09, 0x0F, 0x0E, 0x17, 0x13, 0x04, 0x07, 0x07, 0x0A, 0x0E, 0x04, 0x08, 0x04, 0x07, 
    0x0E, 0x0A, 0x0E, 0x0E, 0x10, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x04, 0x04, 0x0D, 0x0E, 0x0D, 0x0E, 
    0x00, 0x12, 0x10, 0x11, 0x11, 0x0F, 0x0E, 0x13, 0x10, 0x04, 0x0D, 0x11, 0x0E, 0x13, 0x11, 0x13, 
    0x0F, 0x14, 0x10, 0x0F, 0x10, 0x10, 0x11, 0x19, 0x0F, 0x10, 0x11, 0x08, 0x07, 0x08, 0x0C, 0x0E, 
    0x06, 0x0E, 0x0F, 0x0E, 0x0E, 0x0E, 0x0A, 0x0E, 0x0D, 0x04, 0x06, 0x0D, 0x04, 0x15, 0x0D, 0x0F, 
    0x0F, 0x0E, 0x0A, 0x0D, 0x0A, 0x0D, 0x0D, 0x15, 0x0D, 0x0D, 0x0E, 
    0x01, 0x03, 0x05, 0x0C, 
    0x0B, 0x0E, 0x12, 0x25, 0x27, 0x41, 0x36, 0x09, 0x12, 0x13, 0x16, 0x1B, 0x0C, 0x10, 0x0A, 0x0E, 
    0x1C, 0x12, 0x2A, 0x2A, 0x25, 0x2B, 0x28, 0x21, 0x26, 0x28, 0x0E, 0x10, 0x22, 0x20, 0x22, 0x23, 
    0x00, 0x2C, 0x26, 0x29, 0x24, 0x29, 0x1D, 0x31, 0x1E, 0x08, 0x1A, 0x26, 0x1B, 0x24, 0x23, 0x2E, 
    0x21, 0x33, 0x29, 0x2D, 0x20, 0x1F, 0x25, 0x33, 0x24, 0x22, 0x2C, 0x14, 0x0D, 0x14, 0x19, 0x1B, 
    0x0D, 0x29, 0x22, 0x24, 0x1E, 0x2B, 0x17, 0x25, 0x1A, 0x0B, 0x12, 0x1C, 0x08, 0x2C, 0x1A, 0x23, 
    0x21, 0x1E, 0x14, 0x29, 0x15, 0x1A, 0x1A, 0x29, 0x21, 0x1F, 0x26, 
    0xDB, 0xB6, 0x6D, 0xDB, 0xB6, 0x6D, 0xDB, 0xB6, 0x6D, 0x93, 0x00, 0x8A, 0x4B, 0x81, 0x1C, 0x4E, 
    0xA0, 0xDC, 0x09, 0x94, 0x83, 0x2B, 0x80, 0x14, 0x00, 0x02, 0xCC, 0x0D, 0x26, 0x37, 0x93, 0x9B, 
    0xB9, 0x6D, 0x8A, 0xB9, 0xC1, 0xE4, 0x66, 0x72, 0x33, 0x27, 0x00, 0x6B, 0x3A, 0xA9, 0x29, 0xD0, 
    0xA9, 0x71, 0xA7, 0x93, 0x03, 0x4E, 0x2E, 0x27, 0x27, 0x37, 0x9D, 0xC0, 0x34, 0x05, 0xC8, 0x09, 
    0x8D, 0x3B, 0x9D, 0x5C, 0x4E, 0x0E, 0x38, 0x39, 0xB9, 0xE9, 0x54, 0xA0, 0xE9, 0xA4, 0xA6, 0x12, 
    0x53, 0x38, 0x01, 0x66, 0xE0, 0xC5, 0x8D, 0x39, 0xD8, 0xF1, 0xD0, 0x94, 0x42, 0x47, 0xAA, 0x14, 
    0x48, 0x05, 0x7F, 0x83, 0xBF, 0x02, 0x48, 0xA1, 0x02, 0xB9, 0xAA, 0x0C, 0x3A, 0xA7, 0x0C, 0x3A, 
    0x38, 0x2E, 0x97, 0x32, 0xEE, 0x06, 0x2B, 0x0A, 0xCC, 0xCD, 0x9D, 0xE4, 0x72, 0x12, 0x29, 0x90, 
    0x53, 0x40, 0x0A, 0xE4, 0x14, 0x90, 0x02, 0x29, 0xA0, 0x12, 0x5C, 0x0A, 0xE5, 0xE0, 0xAA, 0x0B, 
    0x4C, 0x75, 0x03, 0xBA, 0xA5, 0x1B, 0x50, 0x6E, 0x40, 0x37, 0xA0, 0xDC, 0x80, 0x06, 0xE6, 0x82, 
    0x32, 0x70, 0x07, 0x54, 0x70, 0xB9, 0x0A, 0xA4, 0x40, 0x4E, 0x01, 0x29, 0x90, 0x53, 0x40, 0x0A, 
    0xE4, 0x24, 0x97, 0x93, 0xDC, 0xCD, 0x14, 0x00, 0x13, 0x50, 0x6E, 0x80, 0xB9, 0xB9, 0x8B, 0x01, 
    0x97, 0x03, 0x4C, 0xA2, 0x29, 0x07, 0x3B, 0x28, 0x57, 0xC2, 0x42, 0xD7, 0x58, 0x5D, 0x03, 0x07, 
    0x5D, 0x63, 0x32, 0x5D, 0x09, 0xB8, 0xE8, 0x00, 0x93, 0x80, 0x3B, 0xC0, 0x0C, 0xCC, 0x05, 0xA5, 
    0xE0, 0xCD, 0xE4, 0x24, 0xB8, 0x9C, 0x54, 0x02, 0xE5, 0x96, 0x72, 0x0B, 0x48, 0x01, 0x02, 0xCC, 
    0x0D, 0x26, 0x37, 0x93, 0x9B, 0x39, 0x01, 0x8B, 0x3B, 0x05, 0x9F, 0x5E, 0x0E, 0x77, 0x25, 0x53, 
    0x81, 0x49, 0xA5, 0x5C, 0x50, 0x0A, 0x20, 0xA7, 0x90, 0x02, 0xC8, 0x29, 0xA4, 0x80, 0x72, 0x41, 
    0xA9, 0x98, 0x92, 0x29, 0xDD, 0x1D, 0x5E, 0x4E, 0x9F, 0x02, 0x57, 0x01, 0x4A, 0x37, 0x91, 0x21, 
    0xB7, 0xA2, 0x1B, 0x3C, 0x05, 0x2E, 0x27, 0xB9, 0xDC, 0xE2, 0x0D, 0x45, 0x37, 0x32, 0xE4, 0x24, 
    0x74, 0x0A, 0x4B, 0xB7, 0xA0, 0x5B, 0xD0, 0x2D, 0xE8, 0x16, 0x74, 0x12, 0xCE, 0x09, 0xE7, 0x84, 
    0x73, 0xC2, 0x39, 0x09, 0xDD, 0x82, 0x6E, 0x41, 0xB7, 0xA0, 0x5B, 0xD0, 0x01, 0x93, 0x40, 0x86, 
    0x9C, 0x84, 0x12, 0x9D, 0x04, 0x93, 0x1B, 0xCA, 0x00, 0x53, 0xB7, 0xA0, 0x5B, 0xD0, 0x2D, 0xE8, 
    0x16, 0x74, 0x0B, 0xBA, 0x05, 0xDD, 0x82, 0x4A, 0x00, 0x93, 0x40, 0x6E, 0x41, 0xB9, 0xA5, 0xDC, 
    0x02, 0x52, 0x00, 0x93, 0xD0, 0xCD, 0xE4, 0x14, 0x7B, 0xB2, 0x39, 0xD9, 0x53, 0x4C, 0x6E, 0x9D, 
    0x02, 0x73, 0x39, 0xE5, 0x9C, 0xDE, 0xE5, 0x1E, 0xAC, 0xA0, 0x1C, 0x3A, 0x74, 0x1D, 0xBA, 0x0E, 
    0x5D, 0x87, 0xCE, 0x0A, 0xCA, 0x01, 0xF7, 0xF2, 0x4E, 0xE7, 0x14, 0x97, 0x12, 0x03, 0xB9, 0x05, 
    0xDD, 0x82, 0x6E, 0xE9, 0x96, 0x6E, 0xE9, 0x96, 0x7B, 0xB8, 0xC9, 0xDD, 0xE4, 0x6E, 0x0A, 0xA3, 
    0x04, 0x2E, 0x28, 0x95, 0x72, 0x30, 0x05, 0x78, 0xB0, 0x00, 0x73, 0xA5, 0x62, 0x72, 0x55, 0xDC, 
    0x55, 0x80, 0xD1, 0x55, 0x40, 0x09, 0x74, 0x15, 0xCA, 0x74, 0x65, 0x50, 0x06, 0x1D, 0x6C, 0x75, 
    0x70, 0x29, 0x74, 0x80, 0x49, 0x01, 0x5D, 0xAC, 0x54, 0x53, 0xC8, 0x09, 0x15, 0xE0, 0xA5, 0x14, 
    0x60, 0x0E, 0x28, 0x15, 0x94, 0x43, 0x99, 0xAA, 0x5C, 0x83, 0x0A, 0x5D, 0x83, 0x0A, 0x5D, 0x83, 
    0x0A, 0x5D, 0x09, 0x94, 0x42, 0x67, 0x33, 0x28, 0x87, 0x7B, 0x80, 0x09, 0xB8, 0x53, 0x03, 0x93, 
    0x1B, 0x4A, 0x05, 0x13, 0x40, 0x6E, 0xF1, 0x06, 0x73, 0x33, 0x39, 0xA9, 0x04, 0x3A, 0x05, 0x65, 
    0x3A, 0xA5, 0x0C, 0x3A, 0xA1, 0x14, 0x3A, 0x95, 0x02, 0xBA, 0xE0, 0xE6, 0x70, 0x93, 0xBB, 0xC9, 
    0xE1, 0xE6, 0xD6, 0x2D, 0xE8, 0x16, 0x90, 0x12, 0x0B, 0x98, 0x4E, 0x80, 0x49, 0xA0, 0x1C, 0x60, 
    0x13, 0xF0, 0x60, 0x07, 0xE5, 0x60, 0xA2, 0x2A, 0xD7, 0x54, 0x40, 0xD7, 0x54, 0x40, 0xD7, 0x54, 
    0x40, 0xD7, 0x54, 0x28, 0xD7, 0x94, 0x41, 0x39, 0x34, 0xB0, 0x39, 0x34, 0xB0, 0x07, 0x54, 0xEE, 
    0x06, 0x2B, 0x00, 0x83, 0x3B, 0xE5, 0x9C, 0xDE, 0xE5, 0x1E, 0x50, 0x86, 0x0C, 0xBC, 0x32, 0xA4, 
    0x80, 0xAE, 0xA9, 0x80, 0xAE, 0xA9, 0x80, 0xAE, 0xA9, 0x80, 0xAE, 0x04, 0x4A, 0x95, 0x43, 0x09, 
    0xD8, 0x1C, 0x50, 0x02, 0x36, 0x17, 0x32, 0x70, 0xB9, 0x59, 0x01, 0x02, 0xBA, 0x05, 0xDD, 0x82, 
    0x6E, 0x41, 0x25, 0x94, 0x43, 0x15, 0x77, 0x15, 0xEC, 0x35, 0xB0, 0x39, 0x34, 0xEE, 0x54, 0x98, 
    0x9C, 0xE2, 0x4E, 0x82, 0xC9, 0xCD, 0x1B, 0x50, 0x6E, 0xE9, 0x14, 0x00, 0x13, 0x3C, 0x39, 0x26, 
    0x17, 0x93, 0x70, 0x39, 0xE0, 0x1E, 0x0C, 0x07, 0xE5, 0x1A, 0x54, 0xE8, 0x1A, 0x54, 0xE8, 0x1A, 
    0x54, 0xE8, 0x1A, 0x54, 0xE8, 0x6C, 0x06, 0xE5, 0x70, 0x0F, 0x30, 0x09, 0x97, 0x8B, 0x63, 0x72, 
    0x83, 0x15, 0x12, 0xBC, 0xB9, 0x0C, 0xC8, 0xC5, 0x26, 0x50, 0x0E, 0xB0, 0x99, 0x0E, 0xA5, 0x4A, 
    0xA0, 0x5C, 0x05, 0x34, 0x5D, 0x05, 0x34, 0x5D, 0x05, 0x34, 0x5D, 0x29, 0x90, 0x41, 0xE7, 0x80, 
    0x0C, 0x3A, 0xE0, 0x5E, 0xDE, 0xE9, 0x9C, 0xE2, 0x4A, 0x00, 0x03, 0xA9, 0x90, 0x13, 0x4A, 0xA1, 
    0x9C, 0x4A, 0xA1, 0x9C, 0x40, 0x2A, 0xA4, 0x00, 0x03, 0x29, 0xA0, 0x04, 0xC8, 0xA1, 0x14, 0x4A, 
    0x74, 0x28, 0x05, 0x93, 0x0B, 0xA9, 0x94, 0x01, 0x4B, 0xB7, 0x78, 0x03, 0xBC, 0xC1, 0xE4, 0x56, 
    0x74, 0x12, 0x4A, 0x94, 0x93, 0x9A, 0x4E, 0x41, 0x99, 0x72, 0x4A, 0x99, 0x72, 0x4A, 0xD5, 0x09, 
    0x28, 0x55, 0x4E, 0xA8, 0x80, 0x4E, 0xA5, 0x80, 0x52, 0x00, 0x6B, 0x3A, 0xA9, 0xE9, 0xA4, 0xA6, 
    0x93, 0x9A, 0x4E, 0x6A, 0x3A, 0xA9, 0xE9, 0xA4, 0xA6, 0x93, 0x9A, 0x4E, 0x6A, 0x3A, 0xA9, 0xE9, 
    0xA4, 0xA6, 0x93, 0x9A, 0x4E, 0x6A, 0x3A, 0xA9, 0xA9, 0x04, 0x0A, 0x4A, 0x01, 0xE5, 0x54, 0x01, 
    0x9D, 0x50, 0xAA, 0x9C, 0x80, 0xAA, 0x53, 0xCA, 0x94, 0x53, 0xCA, 0x94, 0x53, 0xD0, 0x74, 0x52, 
    0x89, 0x72, 0x12, 0x8A, 0x6E, 0x26, 0x37, 0x78, 0x03, 0xBC, 0xA5, 0x03, 0x12, 0xB8, 0x05, 0xDE, 
    0x60, 0x6E, 0xF0, 0x86, 0x72, 0x4B, 0x15, 0x32, 0xE4, 0x50, 0xC1, 0x28, 0x57, 0x99, 0x28, 0xD7, 
    0xC0, 0x01, 0x39, 0x94, 0x29, 0xA7, 0xC0, 0xE5, 0x24, 0x77, 0x33, 0x37, 0xA0, 0x9C, 0x00, 0x93, 
    0x40, 0x6E, 0x80, 0x39, 0x09, 0xEE, 0x14, 0x7B, 0x02, 0x5C, 0x4E, 0xB1, 0x27, 0xB8, 0x44, 0x27, 
    0x93, 0x41, 0xA7, 0x52, 0x40, 0x27, 0x0B, 0x9D, 0x4C, 0x06, 0x9D, 0x00, 0x17, 0x9D, 0x02, 0x7B, 
    0x12, 0xEC, 0xCD, 0xE5, 0xE6, 0x6E, 0x30, 0xB7, 0x80, 0x14, 0x00, 0xCA, 0x3D, 0xDC, 0xE4, 0x6E, 
    0x72, 0x37, 0xB9, 0xAA, 0xEA, 0xAA, 0xAA, 0xAB, 0xAA, 0xAE, 0xAA, 0xBA, 0xAA, 0xEA, 0xAA, 0xAA, 
    0x2B, 0x53, 0xAA, 0x7B, 0xCA, 0xE1, 0x1E, 0x60, 0x12, 0x70, 0x17, 0x94, 0x31, 0xB9, 0x01, 0xA5, 
    0x02, 0x83, 0xC9, 0x49, 0x36, 0x27, 0xE0, 0x9C, 0xDE, 0xC5, 0x02, 0x3C, 0xA0, 0x94, 0x3A, 0x94, 
    0x12, 0xCA, 0x75, 0xE8, 0x3A, 0x74, 0x1D, 0xBA, 0x0E, 0x5D, 0x57, 0x0E, 0x95, 0x50, 0x0E, 0xA5, 
    0xE2, 0x01, 0xA6, 0xCC, 0xC5, 0x81, 0x39, 0x95, 0xAA, 0x02, 0xCA, 0x3D, 0xDC, 0xE4, 0x6E, 0x72, 
    0x37, 0xB9, 0x0E, 0x5D, 0x87, 0xAE, 0x43, 0xD7, 0xA1, 0xEB, 0xD0, 0x75, 0xE8, 0x4A, 0x09, 0xE5, 
    0x4A, 0x09, 0xE5, 0x60, 0x01, 0x1E, 0x70, 0x2F, 0xEF, 0x74, 0x4E, 0x81, 0x49, 0x09, 0xCA, 0x3D, 
    0xDC, 0xE4, 0x6E, 0x72, 0x37, 0xB9, 0x06, 0x15, 0xBA, 0x06, 0x15, 0xBA, 0x06, 0x15, 0xBA, 0x06, 
    0x15, 0xBA, 0x06, 0x15, 0xBA, 0x06, 0x15, 0xBA, 0x06, 0x15, 0xBA, 0x06, 0x15, 0xBA, 0x06, 0x15, 
    0xBA, 0x06, 0x15, 0x3A, 0x70, 0x40, 0x05, 0xCA, 0x3D, 0xDC, 0xE4, 0x6E, 0x72, 0x37, 0x87, 0xAA, 
    0x53, 0xAA, 0x4E, 0xA9, 0x3A, 0xA5, 0xEA, 0x94, 0xAA, 0x53, 0xAA, 0x4E, 0xA9, 0x3A, 0xA5, 0xEA, 
    0x94, 0x6E, 0xE2, 0x24, 0x83, 0xC9, 0x49, 0x36, 0x27, 0xE0, 0x9C, 0xDE, 0xC5, 0x02, 0x3C, 0xA0, 
    0x54, 0x50, 0x0E, 0xA5, 0x84, 0x72, 0x1D, 0xBA, 0x0E, 0x5D, 0x87, 0xAE, 0x42, 0x83, 0xAE, 0x42, 
    0x83, 0xAE, 0x54, 0x83, 0xAE, 0x54, 0x53, 0x0E, 0x4E, 0xD3, 0x01, 0x8E, 0xCB, 0xA5, 0x8C, 0xCB, 
    0x05, 0x8D, 0xBB, 0x99, 0x0A, 0xCA, 0x3D, 0xDC, 0xE4, 0x6E, 0x72, 0xB8, 0xA7, 0x74, 0x0B, 0xBA, 
    0x05, 0xDD, 0x82, 0x6E, 0x41, 0xB7, 0xA0, 0x5B, 0xD0, 0x2D, 0xE8, 0xA4, 0x7B, 0xB8, 0xC9, 0xDD, 
    0xE4, 0x70, 0x0B, 0xCA, 0x3D, 0xDC, 0xE4, 0x6E, 0x72, 0xB8, 0x05, 0x13, 0xD0, 0x2D, 0xE6, 0x06, 
    0x93, 0x1B, 0x4C, 0x6E, 0x29, 0xB7, 0xA0, 0x5B, 0xD0, 0x2D, 0xE8, 0x96, 0x72, 0xB8, 0x87, 0x9B, 
    0xC3, 0xBD, 0x9C, 0x54, 0x00, 0xCA, 0x3D, 0xDC, 0xE4, 0x6E, 0x72, 0xB8, 0xA7, 0xA0, 0xDC, 0x00, 
    0x6F, 0xF0, 0x06, 0x6F, 0x70, 0x27, 0xD9, 0x53, 0x0C, 0x93, 0x93, 0x03, 0x73, 0xB1, 0x60, 0x72, 
    0x28, 0x15, 0x93, 0xAB, 0x04, 0x0F, 0x1C, 0xCA, 0x4D, 0x14, 0x00, 0xCA, 0x3D, 0xDC, 0xE4, 0x6E, 
    0x72, 0xB8, 0xB9, 0x05, 0xDD, 0x82, 0x6E, 0x41, 0xB7, 0xA0, 0x5B, 0xD0, 0x2D, 0xE8, 0x16, 0x74, 
    0x0B, 0xBA, 0x05, 0xDD, 0x44, 0x01, 0xCA, 0x3D, 0xDC, 0xE4, 0x6E, 0x72, 0x37, 0x07, 0x73, 0x83, 
    0x3D, 0x09, 0x9F, 0x74, 0x4E, 0xB2, 0x37, 0x98, 0x53, 0x60, 0x4F, 0xF8, 0xF2, 0xC9, 0x9E, 0x02, 
    0x73, 0xC3, 0xCD, 0xE1, 0x26, 0x77, 0x93, 0xC3, 0x2D, 0x00, 0xCA, 0x3D, 0xDC, 0xE4, 0x6E, 0x72, 
    0x37, 0x07, 0x98, 0x1B, 0x60, 0x6E, 0x31, 0x37, 0xC0, 0xDC, 0x62, 0x6E, 0x80, 0xB9, 0x01, 0xE6, 
    0x16, 0x73, 0x03, 0xCC, 0x01, 0x37, 0x77, 0x93, 0xBB, 0xC9, 0xE1, 0x16, 0x00, 0x83, 0xC9, 0x49, 
    0x36, 0x27, 0xE0, 0x9C, 0xDE, 0xC5, 0x82, 0x39, 0xA0, 0x54, 0x50, 0x0E, 0xA5, 0x84, 0x72, 0x1D, 
    0xBA, 0x0E, 0x5D, 0x87, 0xAE, 0x43, 0xD7, 0xA1, 0x2B, 0x25, 0x94, 0x43, 0xA9, 0xA0, 0x1C, 0x60, 
    0x01, 0x5E, 0xDE, 0xE9, 0x9C, 0x00, 0x9B, 0x93, 0x4C, 0x4A, 0x00, 0xCA, 0x3D, 0xDC, 0xE4, 0x6E, 
    0x72, 0x37, 0x87, 0xAA, 0x53, 0xAA, 0x4E, 0xA9, 0x3A, 0xA5, 0xEA, 0x94, 0xAA, 0x53, 0xAA, 0x4E, 
    0x29, 0x53, 0x4E, 0xB1, 0x27, 0xB9, 0x9C, 0x04, 0x93, 0x1B, 0xBC, 0x00, 0x83, 0xC9, 0x49, 0x36, 
    0x27, 0xE0, 0x9C, 0xDE, 0xC5, 0x02, 0x3C, 0xA0, 0x54, 0x50, 0x0E, 0xA5, 0x84, 0x72, 0x1D, 0xBA, 
    0x4A, 0x04, 0xBA, 0x2A, 0x28, 0xBA, 0x4A, 0x24, 0xBA, 0x4A, 0xE6, 0x4A, 0xC9, 0x43, 0xA9, 0xA0, 
    0x1C, 0x60, 0xC1, 0x5C, 0xEE, 0xE5, 0x5E, 0x6C, 0x02, 0x9D, 0x4C, 0x8A, 0xDC, 0x44, 0x06, 0xCA, 
    0x3D, 0xDC, 0xE4, 0x6E, 0x72, 0x37, 0x87, 0xAA, 0x53, 0xAA, 0x4E, 0xA9, 0x3A, 0xA5, 0xEA, 0x94, 
    0xAA, 0x9C, 0x80, 0xCA, 0x13, 0x2A, 0x93, 0x0B, 0xCA, 0x14, 0x5E, 0x6C, 0x98, 0x1C, 0xE0, 0x32, 
    0xE6, 0x00, 0x93, 0xF2, 0x62, 0x01, 0xA5, 0x00, 0x52, 0xA9, 0x72, 0x32, 0x03, 0x2F, 0x6E, 0xCC, 
    0x01, 0x2E, 0xE3, 0xA1, 0x04, 0x4A, 0x95, 0x6B, 0x50, 0xA1, 0x6B, 0x50, 0xAA, 0x6B, 0x50, 0xAA, 
    0xAB, 0xAA, 0xAE, 0x0C, 0xAA, 0xCE, 0x29, 0x53, 0x0E, 0x8E, 0xCB, 0xA5, 0x8C, 0xCB, 0x05, 0x0D, 
    0x4C, 0x6E, 0x28, 0x15, 0x00, 0x02, 0xBA, 0x05, 0xDD, 0x82, 0x6E, 0x41, 0xB7, 0xA0, 0x5B, 0xD0, 
    0x2D, 0xB8, 0x39, 0xDC, 0xE4, 0x6E, 0x72, 0x37, 0x87, 0x6E, 0x41, 0xB7, 0xA0, 0x5B, 0xD0, 0x2D, 
    0xE8, 0x16, 0x74, 0x0A, 0x00, 0xCA, 0xC9, 0x05, 0xF7, 0x80, 0x9B, 0x03, 0xEE, 0x2D, 0xDE, 0x52, 
    0x6E, 0x41, 0xB7, 0xA0, 0x5B, 0xD0, 0x2D, 0xE8, 0x96, 0x72, 0x03, 0x3C, 0xDC, 0xC3, 0x3D, 0xE0, 
    0x5E, 0x4E, 0x2A, 0x00, 0x4A, 0xB7, 0x98, 0x1B, 0x5C, 0x4E, 0x82, 0x3D, 0x09, 0x36, 0x27, 0xC1, 
    0xDE, 0x5C, 0x6E, 0x30, 0xB9, 0xA5, 0xDC, 0x4C, 0x4E, 0x72, 0xA7, 0xB8, 0x9C, 0x00, 0x7B, 0x82, 
    0x3D, 0xC5, 0xE5, 0x24, 0x73, 0x03, 0xC8, 0x29, 0x00, 0x4A, 0xB7, 0xB8, 0x93, 0xF0, 0x29, 0x27, 
    0xA7, 0x9C, 0x9C, 0x64, 0x6F, 0x30, 0x27, 0xB9, 0x9C, 0x00, 0x9B, 0x0B, 0x3E, 0xD9, 0x53, 0xDC, 
    0x49, 0x28, 0xB7, 0xB8, 0x9B, 0x3D, 0x09, 0x9F, 0x04, 0x9B, 0x93, 0xE0, 0x72, 0x83, 0x39, 0x05, 
    0xF6, 0x82, 0x93, 0x03, 0x4E, 0x2E, 0xF8, 0x04, 0xB8, 0x5B, 0xA7, 0x00, 0x93, 0xD0, 0x55, 0x82, 
    0x67, 0xC5, 0x9C, 0x29, 0x93, 0x8B, 0x09, 0x98, 0x13, 0x3E, 0xC5, 0x9E, 0x04, 0x73, 0x73, 0xA7, 
    0xE0, 0x13, 0x4C, 0xC0, 0x5C, 0x60, 0x06, 0x26, 0x07, 0x2B, 0xE6, 0x4A, 0xC9, 0x03, 0x07, 0x54, 
    0x0A, 0xB9, 0x05, 0xE5, 0x16, 0x73, 0x03, 0xCC, 0x0D, 0x30, 0xB9, 0xC1, 0xE4, 0x06, 0x9C, 0x13, 
    0x70, 0x4E, 0x38, 0xA7, 0x73, 0x32, 0x27, 0xC1, 0xE4, 0x24, 0x98, 0x9B, 0xB9, 0xA1, 0xDC, 0xD2, 
    0x29, 0x00, 0x93, 0x40, 0x0E, 0x95, 0xE0, 0x55, 0x32, 0x57, 0x05, 0x26, 0x57, 0xC5, 0x5D, 0x05, 
    0x18, 0x5D, 0x05, 0x03, 0x5D, 0xE5, 0x74, 0x8D, 0x19, 0x74, 0x05, 0x4C, 0x75, 0x85, 0x05, 0x74, 
    0xAE, 0xD2, 0x99, 0x54, 0xD0, 0x99, 0x52, 0x67, 0x09, 0x5D, 0xB9, 0x6E, 0x41, 0x05, 0xCA, 0x6D, 
    0xE5, 0x17, 0xF0, 0x0B, 0xF8, 0x05, 0x74, 0x42, 0x05, 0x74, 0x42, 0x05, 0x74, 0x42, 0x05, 0x74, 
    0x42, 0x01, 0x0A, 0x37, 0x99, 0x1B, 0xEC, 0xCD, 0xE6, 0x66, 0x73, 0x73, 0xB7, 0x94, 0x02, 0x02, 
    0x3A, 0xA1, 0x02, 0x3A, 0xA1, 0x02, 0x3A, 0xA1, 0x02, 0x3A, 0xA1, 0x02, 0x7E, 0x01, 0xBF, 0x80, 
    0x5F, 0xB9, 0x0D, 0x0B, 0xC8, 0x2D, 0xE5, 0x66, 0x72, 0x92, 0x3B, 0x05, 0xEE, 0x24, 0x78, 0x03, 
    0xCC, 0x0D, 0xEE, 0x06, 0x97, 0x1B, 0xCC, 0x2D, 0xE5, 0x26, 0x72, 0x00, 0x5B, 0x40, 0x6E, 0x22, 
    0x37, 0x91, 0x9B, 0xC8, 0x4D, 0xE4, 0x26, 0x72, 0x13, 0xB9, 0x89, 0xDC, 0x44, 0x6E, 0x22, 0x37, 
    0x91, 0x9B, 0xC8, 0x4D, 0xE4, 0x26, 0x12, 0x02, 0xB8, 0x09, 0xE4, 0xA6, 0x6E, 0x41, 0xB9, 0x05, 
    0xDD, 0x04, 0x4E, 0x01, 0x53, 0xCA, 0x29, 0x28, 0x60, 0x4E, 0x40, 0x09, 0x98, 0x9C, 0x50, 0xC0, 
    0x9D, 0x1A, 0x32, 0x9D, 0x1A, 0x32, 0x9D, 0x1A, 0x32, 0x9D, 0x0A, 0x90, 0x01, 0x39, 0xA1, 0x04, 
    0x19, 0x72, 0x02, 0x3E, 0x01, 0xE7, 0x04, 0x9C, 0x13, 0xF0, 0x4D, 0x14, 0x00, 0xCA, 0x3D, 0xDC, 
    0xE4, 0x6E, 0x72, 0xB8, 0xA7, 0x34, 0xE8, 0x94, 0x0A, 0x9D, 0x50, 0xA5, 0x53, 0x95, 0x4E, 0x55, 
    0x3A, 0x95, 0x42, 0x39, 0x39, 0xF0, 0x84, 0x4F, 0xC0, 0xA7, 0xD8, 0x93, 0x60, 0x2A, 0x00, 0x0B, 
    0xCC, 0xCD, 0xE5, 0x14, 0xD8, 0x53, 0x3E, 0x01, 0x65, 0xE0, 0xA9, 0x14, 0xCA, 0xA9, 0x4A, 0xA7, 
    0x2A, 0x9D, 0xAA, 0x74, 0x2A, 0x05, 0x74, 0x42, 0x85, 0x4E, 0x40, 0x19, 0x4F, 0x29, 0x81, 0x72, 
    0x12, 0x99, 0x2A, 0x0B, 0xCC, 0x49, 0xB0, 0xA7, 0x7C, 0xC2, 0xC9, 0xC9, 0x81, 0xA7, 0x2A, 0x9D, 
    0xAA, 0x74, 0xAA, 0xD2, 0x09, 0x15, 0x3A, 0xA5, 0x41, 0x97, 0x7B, 0xB8, 0xC9, 0xDD, 0xE4, 0x6E, 
    0x0A, 0x0B, 0xCC, 0x49, 0x70, 0x39, 0xC9, 0x9E, 0xF2, 0x09, 0x25, 0x40, 0x02, 0xE5, 0xD4, 0x90, 
    0xE9, 0xD4, 0x90, 0xE9, 0xD4, 0x90, 0xE9, 0xD4, 0x90, 0xE9, 0x54, 0x02, 0x64, 0x3A, 0xC1, 0x24, 
    0x50, 0x4E, 0x30, 0x89, 0x72, 0x8A, 0x89, 0x4E, 0x42, 0x01, 0x52, 0x01, 0xEB, 0x16, 0x74, 0xC3, 
    0xCB, 0x01, 0x37, 0x77, 0x93, 0xBB, 0x39, 0x14, 0xE8, 0x24, 0x14, 0xE8, 0x24, 0x14, 0xE8, 0x24, 
    0x74, 0x0A, 0x00, 0x0B, 0xCC, 0x49, 0xB0, 0x81, 0x2E, 0x47, 0x39, 0x9C, 0x44, 0x07, 0xAB, 0x44, 
    0xB9, 0x2A, 0x05, 0xBA, 0x2A, 0x05, 0xBA, 0x2A, 0x05, 0x3A, 0x90, 0x0A, 0x99, 0x0E, 0x68, 0xD0, 
    0x94, 0xC3, 0xCD, 0xDD, 0x1C, 0xEE, 0xE5, 0x0D, 0xCA, 0x3D, 0xDC, 0xE4, 0x6E, 0x72, 0xB8, 0xA7, 
    0x90, 0x5B, 0x40, 0x6E, 0x41, 0xB7, 0xA0, 0x5B, 0x50, 0x6E, 0x39, 0x27, 0xE0, 0x9C, 0x70, 0x4E, 
    0xB1, 0x05, 0x0A, 0x99, 0x0F, 0x25, 0x4E, 0xAE, 0xC4, 0xC9, 0x81, 0xCC, 0x05, 0x5B, 0xD0, 0x2D, 
    0xA8, 0x42, 0xE6, 0xA6, 0x80, 0x12, 0x37, 0x29, 0xA0, 0xC4, 0x4D, 0x05, 0x64, 0x5E, 0x02, 0xCA, 
    0x3D, 0xDC, 0xE4, 0x6E, 0x72, 0xB8, 0x27, 0xA1, 0x5B, 0xBA, 0xC5, 0x1B, 0xDC, 0x49, 0xF6, 0x94, 
    0x32, 0xE6, 0x84, 0xCA, 0x9C, 0x40, 0xA5, 0xDC, 0x02, 0x52, 0x00, 0xCA, 0x3D, 0xDC, 0xE4, 0x6E, 
    0x72, 0xB8, 0x05, 0x3B, 0x27, 0x9C, 0x9C, 0x4E, 0x4E, 0xF8, 0x14, 0x72, 0x0B, 0xC8, 0x2D, 0xE8, 
    0x16, 0x74, 0x0B, 0xCA, 0x2D, 0xE7, 0x84, 0x93, 0x13, 0xCE, 0x09, 0xB0, 0x39, 0x01, 0xDD, 0x02, 
    0x72, 0x0B, 0xBA, 0x05, 0xDD, 0x82, 0x73, 0xC2, 0xC9, 0x09, 0xE7, 0x04, 0xD8, 0x14, 0x00, 0x3B, 
    0x27, 0x9C, 0x9C, 0x4E, 0x4E, 0xF8, 0x14, 0x72, 0x0B, 0xC8, 0x2D, 0xE8, 0x16, 0x74, 0x0B, 0xCA, 
    0x2D, 0xE7, 0x04, 0x9C, 0x13, 0xCE, 0x29, 0xB6, 0x00, 0x0B, 0xCC, 0x49, 0x70, 0x39, 0xC9, 0x9E, 
    0xF2, 0x09, 0x0E, 0x3C, 0x95, 0x42, 0x39, 0x55, 0xE9, 0x54, 0xA5, 0x53, 0x95, 0x4E, 0xA5, 0x50, 
    0x4E, 0x0E, 0x3C, 0xE1, 0x53, 0xEC, 0x29, 0x70, 0xB9, 0x99, 0x0A, 0x00, 0xBB, 0xC9, 0xDD, 0xE4, 
    0x6E, 0x72, 0xB8, 0x97, 0x06, 0x9D, 0x52, 0xA1, 0x13, 0xAA, 0x74, 0xAA, 0xD2, 0xA9, 0x4A, 0xA7, 
    0x52, 0x28, 0x27, 0x07, 0x9E, 0xF0, 0x09, 0xF8, 0x14, 0x7B, 0x12, 0x4C, 0x05, 0x0B, 0xCC, 0x49, 
    0xB0, 0xA7, 0x7C, 0xC2, 0xC9, 0xC9, 0x81, 0xA7, 0x2A, 0x9D, 0xAA, 0x74, 0xAA, 0xD2, 0x09, 0x15, 
    0x3A, 0xA5, 0x41, 0xA7, 0xDC, 0xDC, 0x4D, 0xEE, 0x26, 0x77, 0x13, 0xC3, 0x27, 0x9C, 0x9C, 0x4E, 
    0x4E, 0xF8, 0x04, 0x94, 0x1B, 0xD0, 0x2D, 0xE8, 0x16, 0x74, 0x0B, 0xBA, 0x89, 0x5C, 0x00, 0x03, 
    0x1A, 0x74, 0x8A, 0x53, 0x4E, 0x80, 0x09, 0x94, 0x13, 0x4C, 0xA6, 0x9C, 0x0A, 0x34, 0x9D, 0x0A, 
    0x34, 0x9D, 0x1A, 0x32, 0x9D, 0x1A, 0x32, 0x9D, 0x4A, 0xA0, 0x40, 0x27, 0x94, 0x70, 0x27, 0x94, 
    0x80, 0x39, 0xA5, 0x80, 0xB9, 0x01, 0x55, 0x00, 0xEB, 0x16, 0x74, 0x7B, 0x39, 0xE0, 0xE6, 0x70, 
    0x93, 0xC3, 0xCD, 0xA9, 0x4A, 0xA7, 0x2A, 0x9D, 0xAA, 0x74, 0x0B, 0x48, 0x01, 0x83, 0x3D, 0xE5, 
    0x9C, 0x70, 0x72, 0xC2, 0xB9, 0xA5, 0xDC, 0x82, 0x6E, 0x41, 0xB7, 0x80, 0xDC, 0x02, 0x72, 0xCA, 
    0x27, 0x9C, 0x9C, 0x4E, 0x4E, 0x38, 0x05, 0xEB, 0x16, 0x98, 0x1B, 0xDC, 0x0D, 0xEE, 0x06, 0xB8, 
    0x1B, 0x4C, 0x6E, 0x29, 0x37, 0x93, 0x93, 0xDC, 0x29, 0xEE, 0x14, 0xB8, 0x93, 0x60, 0x6E, 0xE8, 
    0x02, 0xEB, 0x16, 0x98, 0x1B, 0x5C, 0x6E, 0xF6, 0xE6, 0x6E, 0xF1, 0x06, 0x73, 0x92, 0x3B, 0x01, 
    0xF6, 0x14, 0x93, 0x5B, 0xB9, 0xC5, 0xE4, 0x06, 0x7B, 0x83, 0xBB, 0x01, 0xE6, 0x06, 0x78, 0x92, 
    0x3B, 0xC5, 0x9E, 0x00, 0x97, 0x93, 0xCC, 0x0D, 0x5D, 0x00, 0x03, 0x15, 0x74, 0xAA, 0x80, 0x72, 
    0x2A, 0xE5, 0x09, 0x86, 0x39, 0xC5, 0x9E, 0x64, 0x72, 0x83, 0x37, 0x98, 0x9C, 0x04, 0x7B, 0x8A, 
    0x61, 0x4E, 0x28, 0xE5, 0xA9, 0x02, 0xCA, 0x09, 0x54, 0x50, 0x01, 0xEB, 0xD0, 0x99, 0x52, 0xE7, 
    0x2A, 0x1D, 0xE0, 0x0A, 0x5D, 0xE0, 0x12, 0x9E, 0x00, 0x9B, 0x93, 0xE0, 0x4E, 0x71, 0x39, 0xC5, 
    0x9D, 0xE2, 0x72, 0x8A, 0x3B, 0x09, 0xE6, 0x86, 0x2E, 0x00, 0x03, 0x15, 0x74, 0xAA, 0x80, 0x72, 
    0xAA, 0xE0, 0xA9, 0x32, 0xA7, 0x06, 0x26, 0xA7, 0xA6, 0x44, 0xA7, 0x02, 0x25, 0xD0, 0xA9, 0x28, 
    0xD3, 0xC9, 0x64, 0xD0, 0xC9, 0x54, 0x27, 0x0B, 0x9D, 0x4A, 0x01, 0x9D, 0xAA, 0x74, 0x0B, 0x2A, 
    0x00
};
#endif //  ArialBold20_H

#endif 