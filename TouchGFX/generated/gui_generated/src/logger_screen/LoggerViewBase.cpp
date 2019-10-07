/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/logger_screen/LoggerViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

LoggerViewBase::LoggerViewBase() :
    flexButtonCallback(this, &LoggerViewBase::flexButtonCallbackHandler)
{
    backgroundImage.setXY(0, 0);
    backgroundImage.setBitmap(Bitmap(BITMAP_BG_ID));

    flexButton1_1.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    flexButton1_1.setBitmapXY(0, 0);
    flexButton1_1.setIconBitmaps(Bitmap(BITMAP_BLUE_ICONS_HOME_32_ID), Bitmap(BITMAP_BLUE_ICONS_HOME_32_ID));
    flexButton1_1.setIconXY(15, 15);
    flexButton1_1.setPosition(10, 10, 60, 60);
    flexButton1_1.setAction(flexButtonCallback);

    logButton.setBitmaps(Bitmap(BITMAP_SMALL_BTN_ID), Bitmap(BITMAP_SMALL_BTN_PRESSED_ID));
    logButton.setBitmapXY(0, 0);
    logButton.setText(TypedText(T_SINGLEUSEID14));
    logButton.setTextPosition(0, 19, 100, 56);
    logButton.setTextColors(touchgfx::Color::getColorFrom24BitRGB(70, 70, 70), touchgfx::Color::getColorFrom24BitRGB(231, 154, 9));
    logButton.setPosition(135, 200, 100, 56);
    logButton.setAction(flexButtonCallback);

    dumpButton.setBitmaps(Bitmap(BITMAP_SMALL_BTN_ID), Bitmap(BITMAP_SMALL_BTN_PRESSED_ID));
    dumpButton.setBitmapXY(0, 0);
    dumpButton.setText(TypedText(T_SINGLEUSEID15));
    dumpButton.setTextPosition(0, 19, 100, 56);
    dumpButton.setTextColors(touchgfx::Color::getColorFrom24BitRGB(70, 70, 70), touchgfx::Color::getColorFrom24BitRGB(231, 154, 9));
    dumpButton.setPosition(245, 200, 100, 56);
    dumpButton.setAction(flexButtonCallback);

    clearLogButton.setBitmaps(Bitmap(BITMAP_SMALL_BTN_ID), Bitmap(BITMAP_SMALL_BTN_PRESSED_ID));
    clearLogButton.setBitmapXY(0, 0);
    clearLogButton.setText(TypedText(T_SINGLEUSEID16));
    clearLogButton.setTextPosition(0, 19, 100, 56);
    clearLogButton.setTextColors(touchgfx::Color::getColorFrom24BitRGB(70, 70, 70), touchgfx::Color::getColorFrom24BitRGB(231, 154, 9));
    clearLogButton.setPosition(355, 200, 100, 56);

    counterBackgroundImage.setXY(164, 23);
    counterBackgroundImage.setBitmap(Bitmap(BITMAP_COUNTER_BOX_ID));

    countTxt.setPosition(164, 55, 152, 90);
    countTxt.setColor(touchgfx::Color::getColorFrom24BitRGB(222, 222, 222));
    countTxt.setLinespacing(0);
    Unicode::snprintf(countTxtBuffer, COUNTTXT_SIZE, "%s", TypedText(T_SINGLEUSEID17).getText());
    countTxt.setWildcard(countTxtBuffer);
    countTxt.setTypedText(TypedText(T_NUMBERTEXT));

    rngButton.setBitmaps(Bitmap(BITMAP_SMALL_BTN_ID), Bitmap(BITMAP_SMALL_BTN_PRESSED_ID));
    rngButton.setBitmapXY(0, 0);
    rngButton.setText(TypedText(T_SINGLEUSEID18));
    rngButton.setTextPosition(0, 19, 100, 56);
    rngButton.setTextColors(touchgfx::Color::getColorFrom24BitRGB(70, 70, 70), touchgfx::Color::getColorFrom24BitRGB(231, 154, 9));
    rngButton.setPosition(25, 200, 100, 56);

    add(backgroundImage);
    add(flexButton1_1);
    add(logButton);
    add(dumpButton);
    add(clearLogButton);
    add(counterBackgroundImage);
    add(countTxt);
    add(rngButton);
}

void LoggerViewBase::setupScreen()
{

}

void LoggerViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1_1)
    {
        //Interaction1
        //When flexButton1_1 clicked change screen to Main
        //Go to Main with screen transition towards North
        application().gotoMainScreenSlideTransitionNorth();
    }
    else if (&src == &logButton)
    {
        //logBtnInteraction
        //When logButton clicked call virtual function
        //Call logButtonPressed
        logButtonPressed();
    }
    else if (&src == &dumpButton)
    {
        //dumpBtnInteraction
        //When dumpButton clicked call virtual function
        //Call dumpButtonPressed
        dumpButtonPressed();
    }
    else if (&src == &clearLogButton)
    {

    }
    else if (&src == &rngButton)
    {

    }
}
