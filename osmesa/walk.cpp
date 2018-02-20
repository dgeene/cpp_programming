#include <GL/osmesa.h>
#include <GL/glu.h>
#include <sys/io.h>

namespace PC {
    const unsigned W = 320, H = 200;
    const unsigned R = 7, G = 9, B = 4; // 7*9*4 regular palette 252 colors
    //const unsigned R = 6, G = 7, B = 6;
    //const unsigned R = 6, G = 8, B = 5; // 240 colors
    //const unsigned R = 8, G = 8, B = 4; // 256 colors
    const double PaletteGamma = 1.5; // apply gamma to palette
    const double DitherGamma = 2.0/PaletteGamma; // apply dither to gamma
    unsigned char ColorConvert[3][256][256], Dither8x8[8][8];
    const bool TemporalDithering = true; // do temporal dithering
    const unsigned DitheringBits = 6; // dithering strength
    unsigned ImageBuffer[W*H];

    // init graphics
    void Init() {
        //textmode(0x13); // sets graphics mode despite the name
        // setup palette. Bias the colors towards darker ones
        //outportb(0x3C8, 0);
        outb(0x3C8, 0); // youtube 1:36
        //for (unsigned color=0; color < R*G*B; ++color) {

        //}
    }
    // end graphics
    void Close() {
        //textmode(C80);
    }
}
int main() {
    OSMesaContext om = OSMesaCreateContext(OSMESA_RGBA, NULL);
    OSMesaMakeCurrent(om, PC::ImageBuffer, GL_UNSIGNED_BYTE, PC::W, PC::H);

    PC::Init();

    PC::Close();

    OSMesaDestroyContext(om);
}