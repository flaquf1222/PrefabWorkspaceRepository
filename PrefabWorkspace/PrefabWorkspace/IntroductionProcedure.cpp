#include "Introduction.h"
#include "Keyboard.h"
#include "Mouse.h"
#include "Drawer.h"

void Introduction::procedure( ) {
	Task::create< Keyboard >( );
	Task::create< Mouse >( );
	Task::create< Drawer >( );

	//REGISTにシーンを追加していく
	REGIST( SceneController );

	//スタートしたいシーンを入力
	start( "SceneController" );
}
