#ifndef DARKGRAYTHEMEPRESENTER_HPP
#define DARKGRAYTHEMEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class DarkGrayThemeView;

class DarkGrayThemePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    DarkGrayThemePresenter(DarkGrayThemeView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~DarkGrayThemePresenter() {};

private:
    DarkGrayThemePresenter();

    DarkGrayThemeView& view;
};

#endif // DARKGRAYTHEMEPRESENTER_HPP
