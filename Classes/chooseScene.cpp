//
//  chooseScene.cpp
//  HelloCpp
//
//  Created by yang chao (wantnon) on 14-6-16.
//
//

#include "chooseScene.h"
CchooseScene::CchooseScene()
{
}
CchooseScene::~CchooseScene()
{
}
bool CchooseScene::init()
{
	{
		CchooseLayer*layer = new CchooseLayer();
		layer->autorelease();
		layer->init();
		addChild(layer);
		return true;
	}
}