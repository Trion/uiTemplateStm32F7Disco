/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/materialtheme_screen/MaterialThemeViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "BitmapDatabase.hpp"

MaterialThemeViewBase::MaterialThemeViewBase()
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(10, 10, 10));

    textArea2_1.setXY(39, 5);
    textArea2_1.setColor(touchgfx::Color::getColorFrom24BitRGB(248, 252, 249));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID21));

    textArea2_1_1.setXY(10, 5);
    textArea2_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(247, 250, 248));
    textArea2_1_1.setLinespacing(0);
    textArea2_1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID22));

    textArea2_2.setXY(441, 5);
    textArea2_2.setColor(touchgfx::Color::getColorFrom24BitRGB(245, 237, 237));
    textArea2_2.setLinespacing(0);
    textArea2_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID23));

    textArea2_4.setXY(211, 5);
    textArea2_4.setColor(touchgfx::Color::getColorFrom24BitRGB(245, 237, 237));
    textArea2_4.setLinespacing(0);
    textArea2_4.setTypedText(touchgfx::TypedText(T_SINGLEUSEID24));

    toggleButton1_1.setXY(57, 53);
    toggleButton1_1.setBitmaps(touchgfx::Bitmap(BITMAP_DOOR_ID), touchgfx::Bitmap(BITMAP_ROOM_ON_ID));

    toggleButton1_2.setXY(361, 54);
    toggleButton1_2.setBitmaps(touchgfx::Bitmap(BITMAP_KITCHEN_ID), touchgfx::Bitmap(BITMAP_KITCHEN_ON_ID));

    toggleButton1_1_1.setXY(157, 54);
    toggleButton1_1_1.setBitmaps(touchgfx::Bitmap(BITMAP_DOOR_ID), touchgfx::Bitmap(BITMAP_DOOR_ON_ID));

    toggleButton1_2_1.setXY(260, 54);
    toggleButton1_2_1.setBitmaps(touchgfx::Bitmap(BITMAP_GARDEN_ID), touchgfx::Bitmap(BITMAP_GARDEN_ON_ID));

    button1_1.setXY(122, 236);
    button1_1.setBitmaps(touchgfx::Bitmap(BITMAP_ROOM_ID), touchgfx::Bitmap(BITMAP_ROOM_SL_ID));

    button1_2.setXY(240, 236);
    button1_2.setBitmaps(touchgfx::Bitmap(BITMAP_BELL_ID), touchgfx::Bitmap(BITMAP_BELL_SL_ID));

    button1_2_1.setXY(350, 236);
    button1_2_1.setBitmaps(touchgfx::Bitmap(BITMAP_WEATHER_ID), touchgfx::Bitmap(BITMAP_WEATHER_SL_ID));

    toggleButton2.setXY(0, 236);
    toggleButton2.setBitmaps(touchgfx::Bitmap(BITMAP_HOME_ID), touchgfx::Bitmap(BITMAP_HOME_SL_ID));

    add(__background);
    add(box1);
    add(textArea2_1);
    add(textArea2_1_1);
    add(textArea2_2);
    add(textArea2_4);
    add(toggleButton1_1);
    add(toggleButton1_2);
    add(toggleButton1_1_1);
    add(toggleButton1_2_1);
    add(button1_1);
    add(button1_2);
    add(button1_2_1);
    add(toggleButton2);
}

void MaterialThemeViewBase::setupScreen()
{

}