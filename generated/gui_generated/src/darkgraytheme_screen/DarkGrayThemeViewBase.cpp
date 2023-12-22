/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/darkgraytheme_screen/DarkGrayThemeViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"

DarkGrayThemeViewBase::DarkGrayThemeViewBase() :
    buttonCallback(this, &DarkGrayThemeViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 20, 20));

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_HOMECONTROL_ID));
    scalableImage1.setPosition(0, 0, 480, 272);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    toggleButton1.setXY(182, 77);
    toggleButton1.setBitmaps(touchgfx::Bitmap(BITMAP_POWERBTN_ID), touchgfx::Bitmap(BITMAP_POWER_OFF_BTN_ID));

    button1_1.setXY(122, 236);
    button1_1.setBitmaps(touchgfx::Bitmap(BITMAP_ROOM_ID), touchgfx::Bitmap(BITMAP_ROOM_SL_ID));

    button1_2.setXY(240, 236);
    button1_2.setBitmaps(touchgfx::Bitmap(BITMAP_BELL_ID), touchgfx::Bitmap(BITMAP_BELL_SL_ID));

    button1_2_1.setXY(350, 236);
    button1_2_1.setBitmaps(touchgfx::Bitmap(BITMAP_WEATHER_ID), touchgfx::Bitmap(BITMAP_WEATHER_SL_ID));

    toggleButton2.setXY(0, 236);
    toggleButton2.setBitmaps(touchgfx::Bitmap(BITMAP_HOME_ID), touchgfx::Bitmap(BITMAP_HOME_SL_ID));
    toggleButton2.setAction(buttonCallback);

    add(__background);
    add(box1);
    add(scalableImage1);
    add(toggleButton1);
    add(button1_1);
    add(button1_2);
    add(button1_2_1);
    add(toggleButton2);
}

void DarkGrayThemeViewBase::setupScreen()
{

}

void DarkGrayThemeViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &toggleButton2)
    {
        //Interaction1
        //When toggleButton2 clicked change screen to MaterialTheme
        //Go to MaterialTheme with screen transition towards East
        application().gotoMaterialThemeScreenSlideTransitionEast();
    }
}
