#ifndef DARKGRAYTHEMEVIEW_HPP
#define DARKGRAYTHEMEVIEW_HPP

#include <gui_generated/darkgraytheme_screen/DarkGrayThemeViewBase.hpp>
#include <gui/darkgraytheme_screen/DarkGrayThemePresenter.hpp>

class DarkGrayThemeView : public DarkGrayThemeViewBase
{
public:
    DarkGrayThemeView();
    virtual ~DarkGrayThemeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // DARKGRAYTHEMEVIEW_HPP
