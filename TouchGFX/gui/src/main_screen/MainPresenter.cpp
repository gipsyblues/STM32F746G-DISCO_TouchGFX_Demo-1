#include <gui/main_screen/MainView.hpp>
#include <gui/main_screen/MainPresenter.hpp>
#include <touchgfx/Utils.hpp>

MainPresenter::MainPresenter(MainView& v)
    : view(v)
{
}

void MainPresenter::activate()
{
}

void MainPresenter::deactivate()
{
}

void MainPresenter::m2p_ButtonPressed()
{
  view.hw_ButtonPressed();
}

void MainPresenter::v2p_SendTCPData(int data)
{
  touchgfx_printf("MainPresenter::%s: %d\r\n", __FUNCTION__, data);
  model->p2m_SendTCPData(data);
}


