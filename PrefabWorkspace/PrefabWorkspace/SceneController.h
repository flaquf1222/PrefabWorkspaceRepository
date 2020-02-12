#pragma once
#include "Scene.h"

class SceneController : public Scene {
public:
	SceneController( );
	virtual ~SceneController( );
private:
	void initialize( ) override;
	bool update( ) override;
	void draw( ) const override;
};

