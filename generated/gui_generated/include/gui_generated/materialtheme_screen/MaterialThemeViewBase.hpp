/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MATERIALTHEMEVIEWBASE_HPP
#define MATERIALTHEMEVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/materialtheme_screen/MaterialThemePresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/Button.hpp>

class MaterialThemeViewBase : public touchgfx::View<MaterialThemePresenter>
{
public:
    MaterialThemeViewBase();
    virtual ~MaterialThemeViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::TextArea textArea2_1;
    touchgfx::TextArea textArea2_1_1;
    touchgfx::TextArea textArea2_2;
    touchgfx::TextArea textArea2_4;
    touchgfx::ToggleButton toggleButton1_1;
    touchgfx::ToggleButton toggleButton1_2;
    touchgfx::ToggleButton toggleButton1_1_1;
    touchgfx::ToggleButton toggleButton1_2_1;
    touchgfx::Button button1_1;
    touchgfx::Button button1_2;
    touchgfx::Button button1_2_1;
    touchgfx::ToggleButton toggleButton2;

private:

};

#endif // MATERIALTHEMEVIEWBASE_HPP