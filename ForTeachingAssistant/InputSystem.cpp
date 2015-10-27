#include "InputSystem.h"

InputSystem::InputSystem()
{
}
InputSystem::~InputSystem()
{
}

InputSystem* InputSystem::GetInstance()
{
	static InputSystem inst;
	return &inst;
}

bool InputSystem::GetKeyDown( unsigned char key )
{
	return true;
}
bool InputSystem::GetKey( unsigned char key )
{
	return true;
}
bool InputSystem::GetKeyUp( unsigned char key )
{
	return true;
}

bool InputSystem::GetMouseDown( int mouseButton )
{
	return true;
}
bool InputSystem::GetMouseUp( int mouseButton )
{
	return true;
}
Vector2 InputSystem::GetMousePosition( )
{
	return mMousePos;
}

void InputSystem::KeyBoardDown( unsigned char key )
{

}
void InputSystem::KeyBoardUp( unsigned char key )
{

}

void InputSystem::MouseDown( int button, Vector2 pos )
{
	mMousePos = pos;
}
void InputSystem::MouseUp( int button, Vector2 pos )
{
	mMousePos = pos;
}
void InputSystem::MouseMove( Vector2 pos )
{
	mMousePos = pos;
}