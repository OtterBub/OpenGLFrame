#include "DrawSystem.h"

class InputSystem
{
public:
	~InputSystem();

	static InputSystem* GetInstance();

	bool GetKeyDown( unsigned char key );
	bool GetKey( unsigned char key );
	bool GetKeyUp( unsigned char key );

	bool GetMouseDown( int mouseButton );
	bool GetMouseUp( int mouseButton );
	Vector2 GetMousePosition( );

	// KEYBOARD
	void KeyBoardDown( unsigned char key );
	void KeyBoardUp( unsigned char key );

	// MOUSE
	void MouseDown( int button, Vector2 pos );
	void MouseUp( int button, Vector2 pos  );
	void MouseMove( Vector2 pos );

private:
	InputSystem();
	InputSystem( const InputSystem& other );

private:
	Vector2 mMousePos;
	bool key[0xff];
	bool mouse[0xff];
};

#define Input InputSystem::GetInstance()