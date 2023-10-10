
#define RAYGUI_IMPLEMENTATION
#include <raylib.h> // graphics, input, audio
#include <raygui.h> // GUI
#include <physfs.h> // resource management
#include <tinyxml2.h> // for reading Tiled maps


int main(int argc, char *argv[]) 
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    PHYSFS_init(argv[0]);
    tinyxml2::XMLDocument doc;
    InitWindow(screenWidth, screenHeight, "test");

    SetTargetFPS(60);

    while (!WindowShouldClose()) 
    {
        BeginDrawing();

        ClearBackground(BLACK);

        DrawText("Test", 190, 200, 20, WHITE);

        Rectangle rect;
        rect.x = 0; rect.y = 0; rect.height = 100; rect.width = 100;
        GuiLabel(rect, "wut");
        EndDrawing();

    }

    CloseWindow();


    return 0;
}
