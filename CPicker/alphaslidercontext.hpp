#pragma once
#include "slidercontext.hpp"

class AlphaSliderContext : public SliderContext {
private:
	winrt::com_ptr<ID2D1SolidColorBrush> m_checkerboard;

	void Destroy() override;

public:
	using SliderContext::SliderContext;

	HRESULT Refresh(HWND hwnd) override;
	HRESULT Draw(HWND, const SColourF &col) override;
};