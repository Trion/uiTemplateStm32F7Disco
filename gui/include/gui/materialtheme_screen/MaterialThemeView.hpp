#ifndef MATERIALTHEMEVIEW_HPP
#define MATERIALTHEMEVIEW_HPP

#include <gui_generated/materialtheme_screen/MaterialThemeViewBase.hpp>
#include <gui/materialtheme_screen/MaterialThemePresenter.hpp>

class MaterialThemeView : public MaterialThemeViewBase
{
public:
    MaterialThemeView();
    virtual ~MaterialThemeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MATERIALTHEMEVIEW_HPP
