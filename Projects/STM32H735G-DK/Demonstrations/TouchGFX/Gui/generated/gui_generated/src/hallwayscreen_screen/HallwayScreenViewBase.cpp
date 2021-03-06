/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/hallwayscreen_screen/HallwayScreenViewBase.hpp>
#include "BitmapDatabase.hpp"

HallwayScreenViewBase::HallwayScreenViewBase() :
    buttonCallback(this, &HallwayScreenViewBase::buttonCallbackHandler)
{
    windowBg.setXY(109, 35);
    windowBg.setBitmap(touchgfx::Bitmap(BITMAP_WINDOW_BG_ID));

    cloudContainer.setPosition(0, 42, 1440, 90);

    cloud3.setXY(0, 0);
    cloud3.setBitmap(touchgfx::Bitmap(BITMAP_SKY_BG_REVERSE_ID));
    cloudContainer.add(cloud3);

    cloud2.setXY(480, 0);
    cloud2.setBitmap(touchgfx::Bitmap(BITMAP_SKY_BG_ID));
    cloudContainer.add(cloud2);

    cloud1.setXY(960, 0);
    cloud1.setBitmap(touchgfx::Bitmap(BITMAP_SKY_BG_REVERSE_ID));
    cloudContainer.add(cloud1);

    hallback.setXY(0, 0);
    hallback.setBitmap(touchgfx::Bitmap(BITMAP_ST_HOUSEDEMO_UI_BG_ID));

    buttonBathrrom.setXY(58, 83);
    buttonBathrrom.setVisible(false);
    buttonBathrrom.setBitmaps(touchgfx::Bitmap(BITMAP_BATHROOM_NORMAL_ID), touchgfx::Bitmap(BITMAP_BATHROOM_PRESSED_ID));
    buttonBathrrom.setAction(buttonCallback);
    buttonBathrrom.setAlpha(0);

    buttonKitchen.setXY(254, 83);
    buttonKitchen.setVisible(false);
    buttonKitchen.setBitmaps(touchgfx::Bitmap(BITMAP_KITCHEN_NORMAL_ID), touchgfx::Bitmap(BITMAP_KITCHEN_PRESSED_ID));
    buttonKitchen.setAction(buttonCallback);
    buttonKitchen.setAlpha(0);

    mcu.setXY(346, 3);

    add(windowBg);
    add(cloudContainer);
    add(hallback);
    add(buttonBathrrom);
    add(buttonKitchen);
    add(mcu);
}

void HallwayScreenViewBase::setupScreen()
{
    mcu.initialize();
}

void HallwayScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonBathrrom)
    {
        //GoToBathroom
        //When buttonBathrrom clicked change screen to BathroomScreen
        //Go to BathroomScreen with screen transition towards West
        application().gotoBathroomScreenScreenSlideTransitionWest();
    }
    else if (&src == &buttonKitchen)
    {
        //GoToKitchen
        //When buttonKitchen clicked change screen to KitchenScreen
        //Go to KitchenScreen with screen transition towards East
        application().gotoKitchenScreenScreenSlideTransitionEast();
    }
}
