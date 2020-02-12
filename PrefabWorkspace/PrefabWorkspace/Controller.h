#pragma once
#include "Scene.h"

class Controller : public Scene {
public:
	Controller( );
	virtual ~Controller( );
private:
	void initialize( ) override;
	bool update( ) override;
	void draw( ) const override;
};

