// 4.20.0 0xf718be5f
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_progressindicators_bg_small_circle_indicator_bg_line_full[]; // BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_CIRCLE_INDICATOR_BG_LINE_FULL_ID = 0, Size: 54x54 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_blue_progressindicators_bg_small_circle_indicator_bg_line_full, 0, 54, 54, 40, 13, 10, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 28, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
