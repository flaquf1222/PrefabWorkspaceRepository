#include "Introduction.h"
#include "Keyboard.h"
#include "Mouse.h"
#include "Drawer.h"

void Introduction::procedure( ) {
	Task::create< Keyboard >( );
	Task::create< Mouse >( );
	Task::create< Drawer >( );

	REGIST( SceneController );
	start( "SceneController" );
}
