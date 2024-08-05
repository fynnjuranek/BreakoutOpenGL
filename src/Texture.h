#pragma once

#include <glad/glad.h>

class Texture2D
{
    public:
    // ID for all texture operations to reference this particular texture
    unsigned int ID;
    unsigned int Width, Height;
    // texture format
    unsigned int Internal_Format; // format of texture object
    unsigned int Image_Format; // format of loaded image
    // texture configuration
    unsigned int Wrap_S; // wrapping on S axis
    unsigned int Wrap_T; // wrapping on T axis
    unsigned int Filter_Min; // filtering mode if texture pixels > screen pixels
    unsigned int Filter_Max; // filtering mode if texture pixels < screen pixels
    // sets default texture modes
    Texture2D();
    // generate texture from image_data
    void Generate(unsigned int width, unsigned int height, unsigned char* data);
    // bind the texture as current active GL_TEXTURE_2D texture object
    void Bind() const;

}
