#include <iostream>
using namespace std;

class Pen
{
private:
    string color;
    double thickness;
    string type;
public:
    void Draw(string cl, double tk, string tp) 
    {
        SetColor(cl);
        SetThickness(tk);
        SetType(tp);
    }

    void SetColor(string color) 
    {
        this->color = color;
    }

    void SetType(string type) 
    {
        this->type;
    }

    void SetThickness(double thickness)
    {
        this->thickness = thickness;
    }

    string GetColor() 
    {
        return color;
    }

    double GetThickness() 
    {
        return thickness;
    }

    string GetType() 
    {
        return type;
    }
};

class Brush 
{
private:
    string color;

public:
    void Fill(string cl) 
    {
        SetColor(cl);
    }

    void SetColor(string color) 
    {
        this->color = color;
    }

    string GetColor() 
    {
        return color;
    }
};

class SolidBrush : public Brush {};

class GradientBrush : public Brush
{
private:
    string* colors = nullptr;
public:
    ~GradientBrush() 
    {
        delete[] colors;
    }
};

class HatchBrush : public Brush 
{
private:
    string colorTwo;
    string typeOfPattern;

public:
    void SetColorTwo(string colorTwo) 
    {
        this->colorTwo = colorTwo;
    }

    string GetColorTwo() 
    {
        return colorTwo;
    }

    void SetTypeOfPattern(string typeOfPattern) 
    {
        this->typeOfPattern = typeOfPattern;
    }

    string GetTypeOfPattern() 
    {
        return typeOfPattern;
    }
};

class TextureBrush : public Brush 
{
private:
    string pathToImage;

public:
    void SetPathToImage(string pathToImage) 
    {
        this->pathToImage = pathToImage;
    }

    string GetPathToImage() 
    {
        return pathToImage;
    }
};

class LinearGradientBrush : public GradientBrush {};

class RadialGradientBrush : public GradientBrush {};

class Geometry 
{
private:
    Pen* pen;
    Brush* brush;

public:
    Geometry(Pen* pen, Brush* brush) : pen(pen), brush(brush) {}

    void SetPen(Pen* pen) 
    {
        this->pen = pen;
    }

    Pen* GetPen() 
    {
        return pen;
    }

    void SetBrush(Brush* brush) 
    {
        this->brush = brush;
    }

    Brush* GetBrush() 
    {
        return brush;
    }
};

class Rectangle : public Geometry 
{
public:
    Rectangle(Pen* pen, Brush* brush) : Geometry(pen, brush) {}
};

class Ellipse : public Geometry 
{
public:
    Ellipse(Pen* pen, Brush* brush) : Geometry(pen, brush) {}
};

class Polyline : public Geometry 
{
public:
    Polyline(Pen* pen, Brush* brush) : Geometry(pen, brush) {}
};

class Font 
{
private:
    int fontSize;
    string fontFamily;
    int fatness;
    string italics;
    string fontColor;
    string emphasis;

public:
    void SetFontSize(int fontSize) 
    {
        this->fontSize = fontSize;
    }

    int GetFontSize() 
    {
        return fontSize;
    }

    void SetFontFamily(string fontFamily) 
    {
        this->fontFamily = fontFamily;
    }

    string GetFontFamily()
    {
        return fontFamily;
    }

    void SetFatness(int fatness)
    {
        this->fatness = fatness;
    }

    int GetFatness() 
    {
        return fatness;
    }

    void SetItalics(string italics)
    {
        this->italics = italics;
    }

    string GetItalics() 
    {
        return italics;
    }

    void SetFontColor(string fontColor)
    {
        this->fontColor = fontColor;
    }

    string GetFontColor() 
    {
        return fontColor;
    }

    void SetEmphasis(string emphasis) 
    {
        this->emphasis = emphasis;
    }

    string GetEmphasis() 
    {
        return emphasis;
    }
};

int main()
{
    Pen pen;
    pen.Draw("Dark", 10, "tp");

    LinearGradientBrush lgb;
    lgb.Fill("oop");
}