/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

MainViewBase::MainViewBase() :
    flexButtonCallback(this, &MainViewBase::flexButtonCallbackHandler)
{
    backgroundBox.setPosition(0, 0, 800, 480);
    backgroundBox.setVisible(false);
    backgroundBox.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    backgroundImage.setXY(0, 0);
    backgroundImage.setBitmap(Bitmap(BITMAP_BG_ID));

    toggleButton.setBitmaps(Bitmap(BITMAP_SMALL_BTN_ID), Bitmap(BITMAP_SMALL_BTN_PRESSED_ID));
    toggleButton.setBitmapXY(0, 0);
    toggleButton.setText(TypedText(T_TOGGLEBUTTONWHITE));
    toggleButton.setTextPosition(0, 19, 100, 56);
    toggleButton.setTextColors(touchgfx::Color::getColorFrom24BitRGB(82, 82, 82), touchgfx::Color::getColorFrom24BitRGB(231, 154, 9));
    toggleButton.setPosition(348, 34, 100, 56);
    toggleButton.setAction(flexButtonCallback);

    touchButton.setBoxWithBorderPosition(0, 0, 100, 45);
    touchButton.setBorderSize(5);
    touchButton.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(222, 222, 222), touchgfx::Color::getColorFrom24BitRGB(40, 58, 64), touchgfx::Color::getColorFrom24BitRGB(54, 62, 65), touchgfx::Color::getColorFrom24BitRGB(95, 103, 109));
    touchButton.setIconBitmaps(Bitmap(BITMAP_BLACK_ARROW_UP_ID), Bitmap(BITMAP_ORANGE_ARROW_UP_ID));
    touchButton.setIconXY(34, 14);
    touchButton.setPosition(32, 35, 100, 45);
    touchButton.setAction(flexButtonCallback);

    zeroButton.setBitmaps(Bitmap(BITMAP_SMALL_BTN_ID), Bitmap(BITMAP_SMALL_BTN_PRESSED_ID));
    zeroButton.setBitmapXY(0, 0);
    zeroButton.setText(TypedText(T_SINGLEUSEID3));
    zeroButton.setTextPosition(-2, 12, 100, 56);
    zeroButton.setTextColors(touchgfx::Color::getColorFrom24BitRGB(70, 70, 70), touchgfx::Color::getColorFrom24BitRGB(231, 154, 9));
    zeroButton.setPosition(32, 84, 100, 56);
    zeroButton.setAction(flexButtonCallback);

    repeatButton.setDelay(6);
    repeatButton.setInterval(6);
    repeatButton.setBoxWithBorderPosition(0, 0, 100, 45);
    repeatButton.setBorderSize(5);
    repeatButton.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(222, 222, 222), touchgfx::Color::getColorFrom24BitRGB(48, 58, 64), touchgfx::Color::getColorFrom24BitRGB(54, 62, 65), touchgfx::Color::getColorFrom24BitRGB(128, 136, 143));
    repeatButton.setIconBitmaps(Bitmap(BITMAP_BLACK_ARROW_ID), Bitmap(BITMAP_ORANGE_ARROW_ID));
    repeatButton.setIconXY(34, 14);
    repeatButton.setPosition(32, 140, 100, 45);
    repeatButton.setAction(flexButtonCallback);

    counterBackgroundImage.setXY(164, 33);
    counterBackgroundImage.setBitmap(Bitmap(BITMAP_COUNTER_BOX_ID));

    countTxt.setPosition(164, 65, 152, 90);
    countTxt.setColor(touchgfx::Color::getColorFrom24BitRGB(222, 222, 222));
    countTxt.setLinespacing(0);
    Unicode::snprintf(countTxtBuffer, COUNTTXT_SIZE, "%s", TypedText(T_SINGLEUSEID1).getText());
    countTxt.setWildcard(countTxtBuffer);
    countTxt.setTypedText(TypedText(T_NUMBERTEXT));

    ledButton.setBitmaps(Bitmap(BITMAP_SMALL_BTN_ID), Bitmap(BITMAP_SMALL_BTN_PRESSED_ID));
    ledButton.setBitmapXY(0, 0);
    ledButton.setText(TypedText(T_SINGLEUSEID9));
    ledButton.setTextPosition(0, 19, 100, 56);
    ledButton.setTextColors(touchgfx::Color::getColorFrom24BitRGB(70, 70, 70), touchgfx::Color::getColorFrom24BitRGB(231, 154, 9));
    ledButton.setPosition(348, 130, 100, 56);
    ledButton.setAction(flexButtonCallback);

    tcpButton.setBitmaps(Bitmap(BITMAP_BTN_LONG_ID), Bitmap(BITMAP_BTN_LONG_PRESSED_ID));
    tcpButton.setBitmapXY(0, 0);
    tcpButton.setText(TypedText(T_SINGLEUSEID10));
    tcpButton.setTextPosition(0, 19, 200, 56);
    tcpButton.setTextColors(touchgfx::Color::getColorFrom24BitRGB(70, 70, 70), touchgfx::Color::getColorFrom24BitRGB(231, 154, 9));
    tcpButton.setPosition(140, 200, 200, 56);
    tcpButton.setAction(flexButtonCallback);

    add(backgroundBox);
    add(backgroundImage);
    add(toggleButton);
    add(touchButton);
    add(zeroButton);
    add(repeatButton);
    add(counterBackgroundImage);
    add(countTxt);
    add(ledButton);
    add(tcpButton);
}

void MainViewBase::setupScreen()
{

}

void MainViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &toggleButton)
    {
        //toggleButtonInteraction
        //When toggleButton clicked call virtual function
        //Call toggleButtonPressed
        toggleButtonPressed();
    }
    else if (&src == &touchButton)
    {
        //touchButtonInteraction
        //When touchButton clicked call virtual function
        //Call touchButtonPressed
        touchButtonPressed();
    }
    else if (&src == &zeroButton)
    {
        //zeroButtonInteraction
        //When zeroButton clicked call virtual function
        //Call zeroButtonPressed
        zeroButtonPressed();
    }
    else if (&src == &repeatButton)
    {
        //repeatButtonInteraction
        //When repeatButton clicked call virtual function
        //Call repeatButtonPressed
        repeatButtonPressed();
    }
    else if (&src == &ledButton)
    {
        //ledButtonInteraction
        //When ledButton clicked call virtual function
        //Call ledButtonPressed
        ledButtonPressed();
    }
    else if (&src == &tcpButton)
    {
        //tcpButtonInteraction
        //When tcpButton clicked call virtual function
        //Call tcpButtonPressed
        tcpButtonPressed();
    }
}
