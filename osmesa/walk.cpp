#include <GL/osmesa.h>
#include <GL/glu.h>

namespace PC {
    const unsigned W = 320, H = 200;
    unsigned ImageBuffer[W*H];

    void Init() {} // init graphics
    void Close() {} // end graphics
}
int main() {
    OSMesaContext om = OSMesaCreateContext(OSMESA_RGBA, NULL);
    OSMesaMakeCurrent(om, PC::ImageBuffer, GL_UNSIGNED_BYTE, PC::W, PC::H);

    OSMesaDestroyContext(om);
}