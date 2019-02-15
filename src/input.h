#include <SDL2/SDL.h>
#include <map>

//#define __USE_INPUT_EVENT__
#define __USE_INPUT_STATE__

class Input
{
public:
    void UpdateKeyboardStates();
    void UpdateMouseStates();

    // Keyboard Key Queries
    bool IsKeyPressed(SDL_Scancode key);
    bool IsKeyReleased(SDL_Scancode key);
    // Mouse Button Queries
    bool IsMouseButtonPressed(Uint32 button);
    bool IsMouseButtonReleased(Uint32 button);
    // Mouse Position Query
    bool IsMouseMoving();
    int GetMouseX();
    int GetMouseY();

protected:
    // Keyboard Keys
    const Uint8* keyStates;
    // Mouse Buttons
    Uint32 mouseStates;
    // Mouse Motion
    bool mouseMoving;
    SDL_Point mousePosition;
    SDL_Point prevMousePosition;
};