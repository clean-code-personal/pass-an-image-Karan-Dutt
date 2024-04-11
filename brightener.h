#pragma once
#include <cstdint>
#include <memory>


struct Image
{
    Image(int rows, int columns) : m_rows(rows), m_columns(columns)
    {
    }
    ~Image() = default;

    int m_rows;
    int m_columns;
    uint8_t m_pixels[1024 * 1024];
};

class ImageBrightener {
private:
	const std::unique_ptr<Image>& m_inputImage;
public:
	ImageBrightener(const std::unique_ptr<Image>& inputImage);
	int BrightenWholeImage() const;
	const std::unique_ptr<Image>& GetImage() const;
};
