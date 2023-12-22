#ifndef MATERIALTHEMEPRESENTER_HPP
#define MATERIALTHEMEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class MaterialThemeView;

class MaterialThemePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    MaterialThemePresenter(MaterialThemeView& v);

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

    virtual ~MaterialThemePresenter() {};

private:
    MaterialThemePresenter();

    MaterialThemeView& view;
};

#endif // MATERIALTHEMEPRESENTER_HPP
